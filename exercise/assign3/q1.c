// Write a program that reads from the user 2 values of an "integer" type.
// The program should print "EQUAL" if both the values are equal. Otherwise, the program should print "NOT EQUAL".

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    if (a==b)
        printf("EQUAL");
    else
        printf("NOT EQUAL");
    return 0;
}

