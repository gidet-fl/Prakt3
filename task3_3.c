#include <stdio.h>
#include <string.h>

int main(void) {
    char name[50];
    scanf("%49s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    
    int dynamic_width = strlen(name) + 5;
    printf("\"%*s\"\n", dynamic_width, name);

    return 0;
}