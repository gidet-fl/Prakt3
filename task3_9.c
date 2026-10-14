#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t username[50];
    wscanf(L"%49ls", username);
    wprintf(L"Агент %ls авторизован в системе\n", username);
    return 0;
}