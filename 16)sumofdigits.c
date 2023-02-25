#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // ex: 534
    // units = 4
    // tens = 3
    // hundreds = 5
    
    int num;
    int units, tens, hundreds;
    
    printf("enter a 3 digit number : ");
    scanf("%d",&num);
    units=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    printf("sum of digits is %d",units+tens+hundreds);
    return 0;
    
}