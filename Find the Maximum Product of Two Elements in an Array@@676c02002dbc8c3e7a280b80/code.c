#include<stdio.h>
int main(){
    int i,j,n,arr[50],temp,prod;
    scanf("%d",&n);
    for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
     if(arr[i]<0)
      arr[i]=-arr[i];}
    i=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }

        }


   }
  prod=arr[n-1]*arr[n-2];
  printf("%d",prod);
  return 0;
}