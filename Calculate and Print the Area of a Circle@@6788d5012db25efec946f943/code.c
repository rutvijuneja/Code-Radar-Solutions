#include <stdio.h>
#define PI 3.14
int main(){
    int r;
    float area;
    scanf("%d",&r);
    area=PI*r*r;
    printf("Area: %.2f",area);
    return 0;
}