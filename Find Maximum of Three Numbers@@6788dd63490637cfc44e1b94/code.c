# include<stdio.h>
int main(){
    int x,y,z,big;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){
        if (x>z)
         big=x;
        else
        big=z;
    }
    else if(y>z){
        if (y>x)
         big=y;
        else
         big=z;}
    else
     big=z;
    
  printf("%d",big);
  return 0;
}