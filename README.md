# Архитектура высоконагруженных система. ДЗ №4
## Два сервиса на разных языках программирования


## Цель:
> 1. Написать сервисы
> 2. Эндпоинт сервиса А принимает номер телефона и код подтверждения.
> Далее сервис А делает вызов эндпоинта сервиса Б с целью проверки существования полученного номера телефона.
> Если номер неизвестен, то сервисом А возвращается ошибка, иначе валидируется полученный код.
> Если код не валиден, то возвращается ошибка, иначе, телефону проставляется признак верификации и возвращается индикация успеха (любая на выбор).
> 3. Для упрощения данные в обоих сервисах вынесены в код (БД использовать не нужно).
> 4. Взаимодействие между сервисами должно осуществляться по `PRC` с использованием `gRPC` или `Thrift`.
> * Сервис А принимает запросы `GraphQL`


## Инструкция по установке:
1. Скачать/стянуть репозиторий
1. Перейти в папку репозитория
1. Из терминала выполнить команды:
	```bash
	python3 -m grpc_tools.protoc -I. --python_out=. --grpc_python_out=. verification.proto
	protoc -I . --cpp_out=. ./verification.proto
	```
1. Запустить *сервис А* командой `python3 a_service.py`
1. Запустить *сервис Б* командой ` `
1. Выполняем запрос к сервису А
  * Либо переходим в браузер [сюда](http://127.0.0.1:8000) и ввести `{status(phone: "<номер телефона>", pin:"<пин код>")}` в единственное поле
  * Либо выполняем команду из терминала 
  	* `curl "http://127.0.0.1:8000/verif?data=%7B+status+%28telefonNumber%3A+%22<номер телефона>%22%2C+pin%3A+%22<код>%22%29%7D"`




## Инструментарий:
- GIT (устанавливается командой `sudo apt install git -y`)
- protobuf (устанавливается командой `sudo apt  install protobuf-compiler`)
- GCC и доп.модули (устанавливается командой `sudo apt install -y build-essential autoconf libtool pkg-config`)
- grpc устанавливается выполнением команд:
	```
	git clone --recurse-submodules -b v1.33.2 https://github.com/grpc/grpc
	cd grpc
	mkdir -p cmake/build
	pushd cmake/build
	cmake -DgRPC_INSTALL=ON \
		-DgRPC_BUILD_TESTS=OFF \
		-DCMAKE_INSTALL_PREFIX=$MY_INSTALL_DIR \
		../..
	make -j
	make install
	popd
	```
- Установленные модули:
	+ FastAPI `sudo pip3 install fastapi`
	+ Unicorn `sudo pip3 install uvicorn`
	+ graphene `sudo pip3 install graphene`
	+ grpcio `sudo pip3 install grpcio`
	+ grpcio-tools `sudo pip3 install grpcio-tools`

