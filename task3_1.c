#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20] = "SibSUTIS";
    int free_bytes1 = sizeof(str1) - strlen(str1) - 1;
    
    printf("SIZEOF: %zu\n", sizeof(str1));
    printf("STRLEN: %zu\n", strlen(str1));
    printf("FREE_BYTES: %d\n", free_bytes1);

    char str2[20] = "СибГУТИ";
    int free_bytes2 = sizeof(str2) - strlen(str2) - 1;
    
    printf("SIZEOF: %zu\n", sizeof(str2));
    printf("STRLEN: %zu\n", strlen(str2));
    printf("FREE_BYTES: %d\n", free_bytes2);

    return 0;
}