#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num1,num2;

    printf("enter first num : ");
    scanf("%d",&num1);
    printf("enter second num : ");
    scanf("%d",&num2);

    if (num1==num2)
        printf("True\n");
    else  
        printf("False\n");

        return 0;
}