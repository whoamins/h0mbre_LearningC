#include <stdio.h>
#include <math.h>

int main() {
    int userInput = 0;

    scanf("%md", &userInput);

    if (userInput >= 1 && userInput <= 100)
        printf("Your number is between 1 and 100");
    else if (userInput >= 101 && userInput <= 200)
        printf("Your number is between 101 and 200");
    else if (userInput >= 201 && userInput <= 300)
        printf("Your number is between 201 and 300");
    else if (userInput >= 301 && userInput <= 400)
        printf("Your number is between 301 and 400");
    else if (userInput >= 401 && userInput <= 500)
        printf("Your number is between 401 and 500");

    return 0;
}