#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int a,b,oper;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("choose the assignment operator\n1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulo\n");
    scanf("%d",&oper);
    switch(oper){
        case 1:
            printf("Sum : %d",a+b);
            break;
        case 2:
            printf("Difference : %d",a-b);
            break;
        case 3:
            printf("Product : %d",a*b);
            break;
        case 4:
            if (b>0)
            printf("Division : %d",a/b);
            else
            printf("division not defined");
            break;
        case 5:
            if (b>0)
            printf("Remainder : %d",a%b);
            else
            printf("modulo not defined");
            break;
    }
    return 0;
}
    