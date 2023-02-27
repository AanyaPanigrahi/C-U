#include <stdio.h>
#include <stdlib.h>

int main(){
    int grade;
    printf("enter your grade : ");
    scanf("%d",&grade);
    if (grade>=60)
        printf("congoooo");
    else
        printf("try again");
    return 0;
}