#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x1,y1,x2,y2;
    printf("enter x1 : ");
    scanf("%f",&x1);
    printf("enter y1 : ");
    scanf("%f",&y1);
    printf("enter x2 : ");
    scanf("%f",&x2);
    printf("enter y2 : ");
    scanf("%f",&y2);
    printf("the distance between point (%.2f,%.2f) and (%.2f,%.2f) : %.2f",x1,y1,x2,y2,sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
    //sqrt is a func in math.h library -> squareroot
    return 0;
    
}

    