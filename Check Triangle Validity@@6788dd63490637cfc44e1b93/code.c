#include<stdio.h>
int main(){
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    if (x+y>z &&y+z>x&&z+x>y)
     printf("Valid");
    else
    printf("Invalid");
    return 0;
    }