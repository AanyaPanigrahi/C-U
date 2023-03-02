#include <stdio.h>

int main(){

    int grade;
    printf("enter your grade : ");
    scanf("%d",&grade);

    if (grade>=80)
    printf("great job");
    else if (grade>=60)
    printf("you passed");
    else
    printf("better luck next time");
    return 0;
}