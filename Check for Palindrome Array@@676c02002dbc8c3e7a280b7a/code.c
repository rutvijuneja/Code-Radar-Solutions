#include<stdio.h>
int main(){
    int i,n,arr[50],j,palindrome=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    i=0;
    for(i=0,j=n-1;i<=j;i++,j--){
        if(arr[i]==arr[j])
          palindrome=1;
        else{
        palindrome=-1;
        break;}
          
    }
    if(palindrome==-1)
      printf("NO");
    else 
      printf("YES");
   return 0;
    }