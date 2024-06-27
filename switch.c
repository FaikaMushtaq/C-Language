/*#include<stdio.h>
int main(){
    int day;//1-mon;2-tues;
    printf("ENTER DAY(1-7):");
    scanf("%d",&day);
    switch(day){
        case 1:printf("monday\n");
        break;
        case 2:printf("tuesday");
           break;
        case 3:printf("wednesday");
        break;
        case 4:printf("thursday");
        break;
        case 5:printf("friday");
        break;
        case 6:printf("saturday");
        break;
        case 7:printf("sunday");
        default:printf("not a valid day!");
    }
}*/
#include<stdio.h>
int main(){
    char day;
    printf("enter day(a-z)=");
    scanf("%c",&day);
    switch(day){
        case 'm':printf("monday\n");
        break;
        case 't':printf("tuesday");
           break;
        case 'w':printf("wednesday");
        break;
        case 'h':printf("thursday");
        break;
        case 'f':printf("friday");
        break;
        case 's':printf("saturday");
        break;
        case 'd':printf("sunday");
        default:printf("not a valid day!");
    }
}