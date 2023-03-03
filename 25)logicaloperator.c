
// Logical Operators
// && (AND) , || (OR) , ! (NOT)

#include <stdio.h>
#include <stdlib.h>

int main(){
    int grade,money;
    printf("enter grade and money : ");
    scanf("%d%d",&grade,&money);
    if (grade>90 && money<50)
    printf("u get payment\n");
    // if (grade>90 || money<50)
    // printf("you may get payment\n");
    // if (!(grade>70)) // <70
    // printf("try harder");
    return 0;
}