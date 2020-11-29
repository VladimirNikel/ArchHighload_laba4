#сервис телефонов

#Эндпоинт сервиса А принимает номер телефона и код подтверждения.
#Далее сервис А делает вызов эндпоинта сервиса Б с целью проверки существования полученного номера телефона.
#Если номер неизвестен, то сервисом А возвращается ошибка, иначе валидируется полученный код.
#Если код не валиден, то возвращается ошибка, иначе, телефону проставляется признак верификации и возвращается индикация успеха (любая на выбор).

from typing import Optional
from fastapi import FastAPI
from fastapi.responses import HTMLResponse
app = FastAPI()

import uvicorn

#необходимо, чтобы работать с json'ом
import json

#необходимо для работы с переменными окружения
import os

list_tel = ["70123456789", "71234567890", "72345678901", "73456789012"]

def valid_tel(phone: str):
	#норм телефон
	#добавь в бд
	

@app.get("/check_tel")
def check_valid_telefon(phone: str):
	print("tel = ", tel)
	if tel in list_tel:
		print("Нашел")
		return True
	else:
		print("Не нашел")
		if valid_tel(phone):
			return True
		return False

if __name__ == "__main__":
    uvicorn.run(app, host="0.0.0.0", port=8002)