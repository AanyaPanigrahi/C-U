#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 3 numbers a,b,c
// (a,b) , (b,c) , (a,c)  divisible by 3

int main(){

    int a,b,c;

    printf("enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    if (a==0 || b==0 || c==0)
        printf("cannot divide by 0, check input");
    else if ((a%b==0 || b%a==0) && (b%c==0 || c%b==0) && (a%c==0 || c%a==0))
        printf("Divisible numbers");
    else
        printf("Not divisible numbers");

    return 0;

}