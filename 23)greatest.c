#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    int max,min;
    printf("enter 3 numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
   if (a>b && a>c)
    {   max=a;
        if (b>c)
        min=c;
        else
        min=b;
    }
    if (b>a && b>c)
    {
        max=b;
        if (a>c)
        min=c;
        else
        min=a;
    }
    if (c>a && c>b)
    {
        max=c;
        if (b>a)
        min=a;
        else
        min=b;
    }
    printf("maximum : %d",max);
    printf("minimum : %d",min);
    return 0;
}
