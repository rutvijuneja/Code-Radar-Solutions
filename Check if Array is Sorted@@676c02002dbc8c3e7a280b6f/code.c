#include<stdio.h>
int main(){
    int i,j,iswap=0,temp,n,arr[50];
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d ",&arr[i]);
    for(i=0;i<n-1;i++){
        iswap=0;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                iswap++;
            }

        }
    }
    if(iswap==0)
       printf("Sorted");
    else
       printf("Not Sorted");

    return 0;

}