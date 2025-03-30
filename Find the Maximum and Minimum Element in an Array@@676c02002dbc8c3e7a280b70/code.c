#include<stdio.h>
int main(){
    int i,j,min,max,arr[50],n;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
     scanf("%d ",&arr[i]);
    min=arr[0];
    max=arr[0];
    for(j=0;j<n;j++)[
        if(arr[j]>max)
         max=arr[j];
        if(arr[j]<min)
         min =arr[j];
    ]
    printf("%d %d",min,max);
    return 0;

}