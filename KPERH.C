#include<stdio.h>
int main(){
    float kmph;
    float miles;
    printf("enter the kilometers per hour =");
    scanf("%f",&kmph);
    miles =(kmph * 0.6213712);
    printf(" converts kilometers per hour to miles per hour= %f", miles);
    return 0;
    /*if float used answer will be correct*/
}