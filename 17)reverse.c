#include <stdio.h>
#include <stdlib.h>

int main(){

    int num,units,tens,hundreds;
    //int reversednum;

    printf("enter a three digit number : ");
    scanf("%d",&num);
    units=num%10;
    tens=(num/10)%10;
    hundreds=num/100;

    // reversednum=units;
    // reversednum=reversednum*10+tens;
    // reversednum=reversednum*10+hundreds;
    // printf("the reversed number is %d",reversednum);
    
    printf("the reversed number is : %d%d%d",units,tens,hundreds);
    // 234 -> 432
    return 0;

}