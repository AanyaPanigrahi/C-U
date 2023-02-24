#include <stdio.h>
#include <stdlib.h>

int main(){
    int distance = 300; // KM
    int speed = 80; // KM/H
    int hours = distance/speed; // For 240 KM -> 3 hours
    float speedinmins=speed/60.0; // KM/MIN
    float remainingmins=(distance%speed)/speedinmins;
    printf("The journey will take %d hours and %.2f mins",hours,remainingmins);

    // int d,s;
    // float time;
    // printf("The speed of car in km/h : ");
    // scanf("%d",&s);
    // printf("Distance to be covered in km : ");
    // scanf("%d",&d);
    // time=d/s;
    // printf("It will take %.2f hours to reach the destination",time);
    
    return 0;
}