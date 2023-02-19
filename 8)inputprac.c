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
    
    //average grade
    int p,q,r;
    double average;
    printf("enter maths marks : ");
    scanf("%d",&p);
    printf("enter physics marks : ");
    scanf("%d",&q);
    printf("enter mech. marks : ");
    scanf("%d",&r);
    average = (p+q+r)/3.0;
    // or average = double(p+q+r)/3; 
    printf("your average grade : %.2lf",average);
    // cause of scanf i.e input function it gets new line func on its own

    return 0;
}
