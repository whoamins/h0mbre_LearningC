/*
 * Prompt the user to input their first and last name and then print them a welcome message.
 * Try storing the input as a char variable's value.
 * Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the gods that the user input fits.
 * Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.
 */

#include <stdio.h>


int main() {
//    char firstName[50];
//    char lastName[50];
//
//    gets(firstName);
//    gets(lastName);
//
//    printf("%s\n%s", firstName, lastName);
    char *firstName;
    char *lastName;

    scanf("%ms", &firstName);
    scanf("%ms", &lastName);

    printf("Hello %s %s!", firstName, lastName);

    return 0;
}