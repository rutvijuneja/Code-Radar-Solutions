#include <stdio.h>
#include <ctype.h>
int main(){
    char chr;
    scanf("%c",&chr);
    if (isupper(chr))
     printf("Uppercase");
    else if (islower(chr))
    printf("Lowercase");
    else
     printf("Not an alphabet");
    return 0;
}