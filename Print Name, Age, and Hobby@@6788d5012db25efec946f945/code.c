#include <stdio.h>

int main(){
    int age;
    char name[30],hobby[30];
    scanf("%s %d %s",name,&age,hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}