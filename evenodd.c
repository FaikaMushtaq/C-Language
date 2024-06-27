#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("%d",a%2==0);
    
    if(a%2==0)
    {
        printf("a is : a even number");
        
    }
   else
   {
    printf("a is : a odd number");
  } 

 }