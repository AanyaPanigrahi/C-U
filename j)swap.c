#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=10,b=20;
    int temp;
    printf("a is %d\nb is %d",a,b);
    temp=a,a=b,b=temp;
    printf("\nswap case");
    printf("\na is %d\nb is %d",a,b);

    float c=2.22,d=3.33,tempo;
    printf("\nc = %f\nd = %f",c,d);
    tempo=c,c=d,d=tempo;
    printf("\nc = %f\nd = %f",c,d);
    return 0;
}