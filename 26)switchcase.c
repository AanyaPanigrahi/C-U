#include <stdio.h>
#include <stdlib.h>

int main(){

    char grade;
    printf("Enter your grade (A-D) : ");
    scanf("%c",&grade);

    // if (grade=='A')
    //     printf("Grade is between 90-100\n");
    // else if (grade=='B')
    //     printf("Grade is between 80-99\n");
    // else if (grade=='C')
    //     printf("Grade is between 70-79\n");
    // else if (grade=='D')
    //     printf("Grade is between 60-69\n");
    // else 
    //     printf("Try Again\n");

    switch (grade) // Specifying variable
    {
        case 'A':
            printf("grade is between 90-100\n");
            break;
        case 'B':
            printf("grade is between 80-89\n");
            break;
        case 'C':
            printf("grade is between 70-79\n");
            break;
        case 'D':
            printf("grade is between 60-69\n");
            break;
        default:
            printf("try again\n");
            break;
    }

}