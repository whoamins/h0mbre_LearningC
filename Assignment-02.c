/*
 * Initialize and assign a value to an integer, float, and char variable.
 * Then print each one with a sentence on a new line describing variable data type.
 */

#include <stdio.h>


int main() {
    int x = 5;
    float pi = 3.14;
    char* hello = "Hello, World!";

    printf("%d is an integer\n", x);
    printf("%f is a float\n", pi);
    printf("%s is a string (char *)\n", hello);
}