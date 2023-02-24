#include <stdio.h>
#include <stdlib.h>

int main(){
    float data;
    printf("enter the data of floating value type : ");
    scanf("%f",&data);
    printf("integer part of data is : %d",(int) data);
    printf("\ndecimal part of data is : %.2f",data-(int)data);
    return 0;
}