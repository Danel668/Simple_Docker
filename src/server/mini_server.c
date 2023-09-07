#include <stdio.h>
#include <fcgiapp.h>


int main() {
    // Инициализация FastCGI
    FCGX_Init();

    // Создание структуры для хранения данных запроса
    FCGX_Request request;

    // Инициализация структуры запроса
    FCGX_InitRequest(&request, 0, 0);

    // Главный цикл обработки запросов
    while (FCGX_Accept_r(&request) >= 0) {
        
        FCGX_FPrintF(request.out, "Content-Type: text/html\n\n");
        FCGX_FPrintF(request.out, "hello world");
        FCGX_Finish_r(&request);

    }

    return 0;
}
