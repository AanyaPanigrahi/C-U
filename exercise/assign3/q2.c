// Write a program that reads from the user 3 values of an "integer" type.
// The program should print "EQUAL" if all the values are equal. Otherwise, the program should print "NOT EQUAL".

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    printf("enter third number : ");
    scanf("%d",&c);
    if (a==b && b==c)
        printf("EQUAL");
    else
        printf("NOT EQUAL");
    return 0;
}