#include <stdio.h>
#include<ctype.h>
int main(){
    char chr;
    chr vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    scanf("%c",&chr);
    if(isalpha(chr)){
        int isvowel=0;
        for (i=0;i<10;i++){
            if (chr==vowels[i])
             isvowel=1;
             break;
        }
        if(isvowel)
         printf("Vowel");
        else
         printf("Consonent");

    }
    else if(isdigit(chr))
     printf("Digit");
    else
     printf("Special Character");
    return 0;

    
}

