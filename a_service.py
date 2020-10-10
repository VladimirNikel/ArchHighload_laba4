#сервис верификации

#Эндпоинт сервиса А принимает номер телефона и код подтверждения.
#Далее сервис А делает вызов эндпоинта сервиса Б с целью проверки существования полученного номера телефона.
#Если номер неизвестен, то сервисом А возвращается ошибка, иначе валидируется полученный код.
#Если код не валиден, то возвращается ошибка, иначе, телефону проставляется признак верификации и возвращается индикация успеха (любая на выбор).

#Для упрощения данные в обоих сервисах вынесены в код (БД использовать не нужно).
#Взаимодействие между сервисами должно осуществляться по PRC с использованием gRPC или Thrift.
#Сервис А принимает запросы GraphQL

from typing import Optional
from fastapi import FastAPI
from fastapi.responses import HTMLResponse
app = FastAPI()
import uvicorn

#необходимо, чтобы работать с json'ом
import json

#необходимо для работы с переменными окружения
import os
import requests

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
			<td>
				<p>Провести верификацию телефонного номера и кода к нему</p>
				<form action="/verif" method="GET" name="form1">
					<input name="tel" type="text" />
					<input name="pin" type="text" />
					<button class="knopka">Провести проверку</button>
				</form>
			</td>
		</tr>
		</table>
	</body>
	</html>
	"""
	return HTMLResponse(content=html_content, status_code=200)

@app.get("/verif")
def verif(tel: str, pin: str):
	context_query='http://localhost:8002/check_tel'
	request = requests.get(context_query,params={'tel': str(tel)}).text
	print("type request: ",type(request),"\trequest: ",request)
	if request == "true":
		#телефон найден в базе

		#функция проверки кода
		if pin == "1234":
			return json.dumps({"tel": tel,"pin": pin, "answer": "Введенный код верен. Радуйтесь жизни."})
		else:
			return json.dumps({"tel": tel,"pin": pin, "error": "Бьемся в истерике: введенный код неправильный."})

	else:
		return json.dumps({"tel": tel,"pin": pin, "error": "Указанный телефон не существует"})


if __name__ == "__main__":
    uvicorn.run(app, host="0.0.0.0", port=8000)