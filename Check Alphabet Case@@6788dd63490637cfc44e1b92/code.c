#include <stdio.h>
#include <ctype.h>
int main(){
    char chr;
    scanf("%c",&chr);
    if (isupper(chr))
     printf("Uppercase");
    else
    printf("Lowercase");
    return 0;
}