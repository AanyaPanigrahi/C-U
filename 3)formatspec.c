#include <stdio.h>
int main(){
    // Format Specification
    // printf("I am 18 years old");
    // printf("I am 19 years old");
    printf("I am %d years old",18);
    printf("\nI am %d years old",19);
    // %d is like a placeholder for integers
    printf("\nToday I am %d years old and next year I'll be %d years old",18,19);
    // printf("my avg grade is : %d", 90.6); error or some weird number output
    // %d can only be used for int, for floating point no. use %f
    printf("\nMy avg grade is : %f",90.6); //with lot of zeroes
    // to limit zeroes specify it as %.1f or %.2f...
    printf("\nThe avg human age is : %.1f",62.8);
}
