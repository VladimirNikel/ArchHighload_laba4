#сервис верификации

#Эндпоинт сервиса А принимает номер телефона и код подтверждения.
#Далее сервис А делает вызов эндпоинта сервиса Б с целью проверки существования полученного номера телефона.
#Если номер неизвестен, то сервисом А возвращается ошибка, иначе валидируется полученный код.
#Если код не валиден, то возвращается ошибка, иначе, телефону проставляется признак верификации и возвращается индикация успеха (любая на выбор).

#Для упрощения данные в обоих сервисах вынесены в код (БД использовать не нужно).
#Взаимодействие между сервисами должно осуществляться по RPC с использованием gRPC или Thrift.
#Сервис А принимает запросы GraphQL
import grpc

from typing import Optional
from fastapi import FastAPI
from fastapi.responses import HTMLResponse
app = FastAPI()
import uvicorn

import json
import requests
import graphene

telefon_list=[]
def check_pin(tel:str, pin:str, true_pin:str):
	#функция проверки кода
	if pin.isdigit() and pin == true_pin:
		telefon_list.append([tel, pin, 'False'])
		print(telefon_list)
		return json.dumps({"tel": tel,"pin": pin, "answer": "Введенный код верен. Радуйтесь жизни."})
	else:
		return json.dumps({"tel": tel,"pin": pin, "error": "Бьемся в истерике: введенный код неправильный."})


class Query(graphene.ObjectType):
	telefonNumber = graphene.String()
	pin = graphene.String(args={"telefonNumber": graphene.String(), "pin": graphene.String()})
	status = graphene.String(args={"telefonNumber": graphene.String(), "pin": graphene.String()})

	def resolve_status(self, info, **args):
		#опрос временной таблицы, которая хранится только в этом сервисе
		for i in telefon_list:
			temp_mass=[]
			temp_mass.extend(i)
			if args["telefonNumber"] in temp_mass:
				if args["pin"]==temp_mass[2]:
					return temp_mass[2]
				else:
					return "pin neveren"
		
		#если телефон не найден во временной таблице
		context_query='http://localhost:8002/check_tel'		#запрос к серверу Б
		request = requests.get(context_query,params={'tel': args["telefonNumber"] }).text
		if request == "true":	#телефон найден в базе сервиса Б
			if args["pin"].isdigit():
				telefon_list.append([args["telefonNumber"], args["pin"], 'Confirmed'])		#занесение во временную таблицу данных, что код валиден
			else: 				#код не валиден
				telefon_list.append([args["telefonNumber"], args["pin"], 'Unconfirmed'])	#занесение во временную таблицу данных, что код не валиден
				#возвращение какой-то ошибки должно быть
				return "pin nevaliden"
			for i in telefon_list:
				temp_mass=[]
				temp_mass.extend(i)	
				if args["telefonNumber"] in temp_mass:
					return temp_mass[2]
		else:
			#вовзращение еще какой-то ошибки, что телефон невалиден
			return "not good - telefona net"

schema = graphene.Schema(query=Query)

@app.get("/")
def print_web():
	html_content = """
		<html>
	<head>
	<title>Сервис верификации телефонных номеров</title>
	<style>
		button.knopka {
			color: #fff; 
			background: #FFA500; 
			padding: 5px; 
			border-radius: 5px;
			border: 2px solid #FF8247;
		} 
		button.knopka:hover { 
			background: #FF6347; 
		}
	</style>
	</head>
	<body>
		<h1>Сервис верификации телефонных номеров</h1>
		<table>
		<tr>
			<form action="/verif" method="GET" name="form1">
				<td>
					<p>Провести верификацию телефонного номера и кода к нему</p>
					<p>Введите ваш запрос в форме GraphQL</p>
					<textarea name="data" cols="40" rows="10"></textarea>
				</td>
				<td>
					<button class="knopka">Провести проверку</button>
				</td>
			</form>
		</tr>
		</table>
	</body>
	</html>
	"""
	return HTMLResponse(content=html_content, status_code=200)

@app.get("/verif")
def verif(data: str):
	#print("data: ", data)					# { status (telefonNumber: "1545784848818", pin: "3333")}
	result = schema.execute(data)
	return str(result)
#	for i in telefon_list:
#		temp_mass=[]
#		temp_mass.extend(i)
#		if tel in temp_mass:
#			return check_pin(tel, pin, temp_mass[1])
	#если телефон не найден во временной таблице
#	context_query='http://localhost:8002/check_tel'
#	request = requests.get(context_query,params={'tel': str(tel)}).text
#	if request == "true":	#телефон найден в базе
#		return check_pin(tel, pin, pin)
#	else:
#		return json.dumps({"tel": tel,"pin": pin, "error": "Указанный телефон не существует"})

if __name__ == "__main__":
    uvicorn.run(app, host="0.0.0.0", port=8000)