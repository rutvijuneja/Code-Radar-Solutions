#include<stdio.h>
int main(){
    int i,n,arr[50],index=-1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d ",&arr[i]);
    i=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                index=i;
                break;
            }
        }
    }
    if(index!=-1)
      printf("%d",arr[index]);
    else
     printf("-1");
}