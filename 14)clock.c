#include <stdio.h>
#include <stdlib.h>

int main(){
    int sec,hours,minutes,seconds;
    printf("number of seconds : ");
    scanf("%d",&sec);
    hours=sec/3600;
    minutes=(sec%3600)/60;
    seconds=((sec%3600)%60)/60;
    printf("%d : %d : %d",hours,minutes,seconds);
    return 0;
}