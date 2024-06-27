#include<stdio.h>
int main(){
    int hours;
    int minutes;
    printf("enter the time in hours =");
    scanf("%d",&hours);
    printf("enter the time in minutes =");
    scanf("%d",&minutes);
    printf(" total number of minutes = %d",(hours*60)+minutes);
    return 0;
}