/*
Your task is to implement the swap functionality between
2 floating Point variables holding 2 floating point values.
Print the values of both variables BEFORE and AFTER the swapping functionality.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    float c=2.22,d=3.33,tempo;
    printf("\nc = %f\nd = %f",c,d);
    tempo=c,c=d,d=tempo;
    printf("\nc = %f\nd = %f",c,d);
    return 0;
}