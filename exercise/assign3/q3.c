// Write a program that reads from the user a "three-digit" integer value.
// The program should print "ASCENDING" if the three digits of the number are in ascending order (left to right)
// If not, the program should print "NOT ASCENDING".

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,unit,tens,hundreds;
    printf("enter a three digit number : ");
    scanf("%d",&num);
    unit=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    if (hundreds<tens && tens<unit)
        printf("ASCENDING");
    else
        printf("NOT ASCENDING");
    return 0;
}

// for positive inputs only