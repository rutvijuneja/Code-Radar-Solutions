#include<stdio.h>
int main(){
    int i,j,arr[50],n,largest,secondlargest=-1;
    scanf("%d",&n);
    if(n<2){
     printf("-1");
     return 0;
    }
    for(i=0;i<n;i++){
      scanf("%d ",&arr[i]);
      if(arr[i]<0)
        arr[i]=-arr[i];    }
    i=0;
    largest=arr[0];
     
   
      for(i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];

           }
        if(arr[i]<largest&&arr[i]>secondlargest)
          secondlargest=arr[i];
      }
     printf("%d",secondlargest);
     
 return 0;
    
    
}