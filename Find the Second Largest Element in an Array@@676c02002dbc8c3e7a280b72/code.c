#include<stdio.h>
int main(){
    int i,j,arr[50],n,largest,secondlargest=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d ",&arr[i]);
    i=0;
    largest=arr[0];
    if(n<2)
     secondlargest=-1;
    else{
      for(i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];

           }
        if(arr[i]<largest&&arr[i]>secondlargest)
          secondlargest=arr[i];
      }

    }
   
    if(secondlargest==-1)
     printf("%d",secondlargest);
    else
     printf("%d",secondlargest);
     
 return 0;
    
    
}