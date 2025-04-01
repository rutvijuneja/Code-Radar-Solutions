#include<stdio.h>
int main(){
    int i,j,n,arr[1000],k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(j=0;j<k;j++){
        temp=arr[n-1];
        for(i=n-1;i>=1;i--){
            arr[i]=arr[i-1];
        }
        arr[i]=temp;
    }
    return 0;
}