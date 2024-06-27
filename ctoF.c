#include<stdio.h>
int main(){
 int C; 
    printf("input a temperature in degree celsius= ");
    scanf("%d",&C);
    int temp=((9.0/5.0)*C)+32;
    printf("the conversion of temperature from celsius to farhenheit = %d degree farhenheit", temp);
}