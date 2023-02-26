#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int x2,x4,x6,x8;
    printf("enter x: ");
    scanf("%d",&x);
    x2=x*x;
    x4=x*x*x*x;
    x6=x*x*x*x*x*x;
    x8=x*x*x*x*x*x*x*x;
    printf("x^2 = %d \nx^4 = %d \nx^6 = %d \nx^8 = %d",x2,x4,x6,x8);
    // x2 = x*x
    // x4 = x2 * x2
    // x6 = x4 * x2
    // x8 = x4 * x4 -> instead of using 3,5 or 7 multiplications we can use just one
    return 0;
}