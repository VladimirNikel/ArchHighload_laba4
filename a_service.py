#сервис верификации

#Эндпоинт сервиса А принимает номер телефона и код подтверждения.
#Далее сервис А делает вызов эндпоинта сервиса Б с целью проверки существования полученного номера телефона.
#Если номер неизвестен, то сервисом А возвращается ошибка, иначе валидируется полученный код.
#Если код не валиден, то возвращается ошибка, иначе, телефону проставляется признак верификации и возвращается индикация успеха (любая на выбор).

#Для упрощения данные в обоих сервисах вынесены в код (БД использовать не нужно).
#Взаимодействие между сервисами должно осуществляться по RPC с использованием gRPC или Thrift.
#Сервис А принимает запросы GraphQL
import grpc

from fastapi import FastAPI
from fastapi.responses import HTMLResponse
app = FastAPI()
import uvicorn

import json
import requests
import graphene

telefon_list=[]

def check_valid_code(phone: str, pin: str):
	if pin.isdigit() and (pin >= 0 and pin <= 9999):
		telefon_list.append([phone, pin, 'Confirmed'])		#занесение во временную таблицу данных, что код валиден
	else:
		telefon_list.append([phone, pin, 'Unconfirmed'])	#занесение во временную таблицу данных, что код не валиден
		return "pin nevaliden"
	for i in telefon_list:
		temp_mass=[]
		temp_mass.extend(i)	
		if phone in temp_mass:
			return temp_mass[2]

class Query(graphene.ObjectType):
	status = graphene.String(args={"phone": graphene.String(), "pin": graphene.String()})

	def resolve_status(self, info, **args):
		phone = args["phone"]
		pin = args["pin"]

		for i in telefon_list:
			temp_mass=[]
			temp_mass.extend(i)
			if phone in temp_mass:
				if pin == temp_mass[2]:
					return temp_mass[2]
				else:
					return "pin neveren"
		
		#если телефон не найден во временной таблице
		channel 	= grpc.insecure_channel('localhost:8002')							#open a gRPS channel
		stub 		= verification_pb2_grps.VerificationStub(channel)					#create a stub (client)
		number 		= verification_pb2.PhonePinRequest(phone=int(phone), pin=int(pin))	#create a valid request message
		response 	= stub.CheckValidTelefon(number)									#обращение к сервису B
		print("response.status\t", response.status)
		

		#context_query='http://localhost:8002/check_tel'
		#request = requests.get(context_query,params={'phone': str(args["phone"])}).text
		#print("type request: ",type(request),"\trequest: ",request)
		#if request == "true":
		

		if response.status == "True":	#телефон найден в базе сервиса Б
			return check_valid_code(phone, pin)
		else:
			#вовзращение еще какой-то ошибки, что телефон невалиден
			return "not good - telefona net"

schema = graphene.Schema(query=Query)

@app.get("/")
def print_web():
	html_content = open('./index.html', 'r').read()
	return HTMLResponse(content=html_content, status_code=200)

@app.get("/verif")
def verif(data: str):
	print("data\t",data)
	result = schema.execute(data)
	print(result)
	return str(result)

if __name__ == "__main__":
    uvicorn.run(app, host="0.0.0.0", port=8000)