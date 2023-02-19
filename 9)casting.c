#include <stdio.h>
#include <stdlib.h>
int main(){

    int num1=5;
    double num2=2;
    double result;
    result = num1/num2;
    // if both int -> result = num1/(double)num2
    // or result = (double)num1/num2 -> output floating value
    // we can also cast as int(7.9)

    printf("result = %.1lf\n",result); // 2.5
    // for the output to be of double type one or more of input should be double
    // result will be of higher value datatype
    // that is if an operator is applied on same datatype the result will be of the same
    // int a,b -> int ; int a, double b -> double ; double a,b -> double etc.


    //weather temp unit change task
    // T(F) = T(C)*1.8 + 32

    // C -> F
    int c;
    printf("Enter temperature in Celsius : ");
    scanf("%d",&c);
    printf("\nIt is equal to %.2lf Fahrenheit",(c*1.8)+32);

    // F -> C
    int f;
    printf("Enter temperature in Fahrenheit");
    scanf("%d",&f);
    printf("\nIt is equal to %.2lf Celsius",(f-32)/1.8);
    return 0;
}
