#include <stdio.h>

int main() {
    // int l;
    // int b;
    // printf("enter length : ");
    // scanf("%d",&l);
    // printf("\nenter breadth : ");
    // scanf("%d",&b);
    // printf("\narea is %d",l*b);

    double l,b;
    double area;
    printf("enter length : ");
    scanf("%lf",&l);
    printf("\nenter breadth : ");
    scanf("%lf",&b);
    area=l*b;
    printf("\narea is %.1lf",area);

    // double l,b;
    double peri;
    printf("\nenter length : ");
    scanf("%lf",&l);
    printf("\nenter breadth : ");
    scanf("%lf",&b);
    peri=2*(l+b);
    printf("perimeter of rectangle is : %.2lf",peri);
    return 0;

    return 0;
}
