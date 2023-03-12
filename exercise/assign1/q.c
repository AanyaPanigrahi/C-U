// Your task is to write a program that receives 2 floating point values representing the height and width of a rectangle
// The program should calculate and print the Perimeter of the given rectangle.

#include <stdio.h>

int main(){

    double l,b;

    double peri;

    printf("\nenter length : ");

    scanf("%lf",&l);

    printf("\nenter breadth : ");

    scanf("%lf",&b);

    peri=2*(l+b);

    printf("perimeter of rectangle is : %lf",peri);

    return 0;

}