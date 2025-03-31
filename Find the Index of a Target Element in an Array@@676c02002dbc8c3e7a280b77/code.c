#include<stdio.h>
int linearsearch(int arr[],int n,int item){
    int i=0;
    for(i=0;i<n;i++){
        if(arr[i]==item)
         return i;
    }
    return -1;
}
int main(){
    int i,n,item,index,arr[50];
     scanf("%d",&n);
    for(i=o;i<n;i++)
     scanf("%d ",&arr[i]);
    scanf("%d",&item);
    index=linearsearch(arr,n,item);
    if(index==-1)
      printf("%d",index);
    else
     printf("%d",index);
    return 0;
    }