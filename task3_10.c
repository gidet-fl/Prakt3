#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t mod1[50], mod2[50], mod3[50];
    wscanf(L"%49ls %49ls %49ls", mod1, mod2, mod3);
    wprintf(L"%-15ls|%20ls|%.5ls\n", mod1, mod2, mod3);
    return 0;
}