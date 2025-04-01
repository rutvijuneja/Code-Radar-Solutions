#include<stdio.h>
int main(){
    int arr[100],b[100],n,i,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
     b[i]=-1;
}
   for(i=0;i<size<i++){
    count=1;
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            freq[j]=0;
        }

    }
    if(freq[i]!=0)
       freq[i]=count;
   }
   for(i=0;i<n;i++){
    if(freq[i]!=0)
     printf("%d %d",arr[i],arr[j]);
   }
   return 0;
}