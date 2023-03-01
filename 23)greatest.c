#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    int max,min;
    printf("enter 3 numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a<b)
    {
        max=b;
        min=a;
    }
    if (max<c);
        max=c;
    if (c<min)
        min=c;

    printf("Maximum number is %d",max);
    printf("Minimum number is %d",min);
}