#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Value -> |Value|

int main(){

    int num;

    printf("Enter an integer (positive/negative) : ");
    scanf("%d",&num);

    if (num<0)
        printf("The absolute value ff %d is |%d|\n",num,(-1)*num);
    else 
        printf("The absolute value of %d is |%d|\n",num,num);

    return 0;
    
}