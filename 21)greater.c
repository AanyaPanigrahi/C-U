#include <stdio.h>
#include <stdlib.h>

int main(){

    // relational operators > , < , >= , <= , == , !=

    /* 

    int num1,num2;
    printf("enter two numbers : ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1>num2)
        printf("max : %d",num1);
    else
        printf("max : %d",num2);
    return 0;
    
    */

    float num1,num2;

    printf("enter first number : ");
    scanf("%f",&num1);
    printf("enter second number : ");
    scanf("%f",&num2);
    
    if (num1>num2)
    {
        printf("maximum : %f \n",num1);
        printf("minimum : %f",num2);
    }
    else
    {
        printf("maximum : %f \n",num2);
        printf("minimum : %f",num1);
    }
    return 0;

}

