#include<stdio.h>
int main(){
    int n,i,j,arr[50],peak=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d ",&arr[i]);
    for(j=0;j<n;j++){
        if(j==0){
            if(arr[j]>arr[j+1])
               peak=arr[j];
            
        }
        if(j==n-1){
            if (arr[j]>arr[j-1])
               peak=arr[j];
          
        }
        if(arr[j]>arr[j-1]&&arr[j]>arr[j+1]){
          peak=arr[j];
          break;}
        
         
          
    }
     printf("%d",peak);
    return 0;
}