#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// using logical operator && to print quadrants in which a point lies
int main(){

    int x, y;

    printf("Enter x and y : ");
    scanf("%d%d",&x,&y);

    if (x>0 && y>0)
        printf("First Quadrant");
    else if (x>0 && y<0)
        printf("Fourth Quadrant");
    else if (x<0 && y>0)
        printf("Second Quadrant");
    else if (x==0 && y==0)
        printf("Origin");
    else 
        printf("Third Quadrant");

    return 0;

}