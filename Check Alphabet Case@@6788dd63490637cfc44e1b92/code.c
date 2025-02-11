#include <stdio.h>

int main(){
    char chr;
    scanf("%c",&chr);
    if (chr.isupper())
     printf("Uppercase");
    else
    printf("Lowercase");
    return 0;
}