#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int num;

    printf("enter num : ");
    scanf("%d",&num);

    if (num>=10 && num<=99)
        printf("It is a two digit number");
    else if (num>99 && num<=999)
        printf("It is a three digit number");
    else 
        printf("It is neither two nor three digit number");

    return 0;
}

// defined for positive values