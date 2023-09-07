## Part 1. Готовый докер

- Качаем официальный образ nginx

<img src="img/1.1.png"></img>

- Проверяем наличие докер образа 

<img src="img/1.2.png"></img>

- Запускаем докер образ nginx

<img src="img/1.3.png"></img>

- Проверяем что образ запустился

<img src="img/1.4.png"></img>

- Запустим команду `docker inspect`
- Размер контейнера (в байтах)

<img src="img/1.5.1.png"></img>

- Список замапленных портов

<img src="img/1.5.2.png"></img>

- ip контейнера

<img src="img/1.5.3.png"></img>

- Остановим докер контейнер и проверим, что он остановился

<img src="img/1.6.png"></img>

- Запустим докер контейнер с портами 80:80 и 443:443

<img src="img/1.7.png"></img>

- Откроем базовую страницу nginx

<img src="img/1.8.png"></img>

- Перезапустим докер контейнер и проверим, что он перезапустился

<img src="img/1.9.png"></img>

## Part 2. Операции с контейнером

- Прочитали файл nginx.conf

<img src="img/2.1.png"></img>

- Создадим файл nginc.conf на нашем устройстве

<img src="img/2.2.png"></img>

- Настроим в нем по пути /status отдачу страницы статуса сервера nginx

<img src="img/2.3.1.png"></img>

<img src="img/2.3.2.png"></img>

- Скопируем файл конфигурации внутрь докер-образа

<img src="img/2.4.png"></img>

- Перезапустим nginx внутри докер-образа

<img src="img/2.5.png"></img>

- Откроем страничку со статусом сервера nginx

<img src="img/2.6.png"></img>

- Экспортируем контейнер в файл container.tar

<img src="img/2.7.png"></img>

- Остановим наш контейнер

<img src="img/2.8.png"></img>

- Удалим образ nginx

<img src="img/2.9.png"></img>

- Удалим контейнер

<img src="img/2.10.png"></img>

- Импортируем контейнер обратно

<img src="img/2.11.png"></img>

- Запустим контейнер

<img src="img/2.12.png"></img>

- Откроем страничку со статусом сервера nginx

<img src="img/2.13.png"></img>

