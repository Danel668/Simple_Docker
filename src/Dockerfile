# Используем готовый образ nginx
FROM ubuntu:20.04

# Устанавливаем необходимые пакеты
RUN apt-get update && apt-get install -y gcc libfcgi-dev spawn-fcgi nginx && apt-get clean && rm -rf /var/lib/apt/lists/*

# Копируем исходники мини-сервера
COPY /server/mini_server.c /app/mini_server.c

# Компилируем мини-сервер и запускаем его
RUN gcc -o /app/mini_server /app/mini_server.c -lfcgi

# Копируем nginx.conf
COPY ./nginx/nginx.conf /etc/nginx/nginx.conf

# Создаем группу и пользователя, добавляем пользователя в эту группу
RUN groupadd -r nginxuser && useradd -r -g nginxuser nginxuser

WORKDIR /etc/nginx

# Даем права пользователю
RUN chown -R nginxuser:nginxuser /etc/nginx
RUN chown -R nginxuser:nginxuser /var
RUN chown -R nginxuser:nginxuser /run

# Переключаемся на пользователя
USER nginxuser

CMD spawn-fcgi -p 8080 /app/mini_server && nginx -g "daemon off;"

