#include <stdio.h>
#include <stdlib.h>
int main(){

    // int a1=1,n=9,d=2;
    // int an;
    // printf("the a'nth term is %d",a1+(n-1)*d);

    float a1,d,an;
    int n;
    printf("enter first number : ");
    scanf("%f",&a1);
    printf("enter common diff : ");
    scanf("%f",&d);
    printf("enter number range : ");
    scanf("%d",&n);
    an=a1+(n-1)*d;
    printf("the nth term is %.2f",an);

    // printf("the sum..");

    float S,b1,bm;
    int m;
    printf("\nenter first term : ");
    scanf("%f",&b1);
    printf("enter last term : ");
    scanf("%f",&bm);
    printf("enter number range : ");
    scanf("%d",&m);
    S=(b1+bm)*m/2;
    printf("the sum of this arithmetic progression is %.2f",S);
    return 0;
}