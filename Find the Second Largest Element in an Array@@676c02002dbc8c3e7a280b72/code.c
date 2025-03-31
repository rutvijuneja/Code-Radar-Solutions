#include<stdio.h>
int main(){
    int i,j,arr[50],n,temp,peak=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d ",&arr[i]);
    i=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+i]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    peak=arr[n-2];
    printf("%d",peak);
    
    
}