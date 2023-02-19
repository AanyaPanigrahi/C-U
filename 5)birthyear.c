#include <stdio.h>

// birth year = current year - age

int main(){
    // printf("Birth Year : %d\n", 2023-19);
    // taking input

    int currentyear;
    int age;
    scanf("%d",&currentyear);
    scanf("%d",&age);
    printf("your birth year is %d",currentyear-age);
    return 0;

}
