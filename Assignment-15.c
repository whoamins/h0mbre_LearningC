#include <stdio.h>


int main() {
    int x = 5;
    int *ptr = &x;

    printf("The value of int variable is: %d\n", x);
    printf("The value of the pointer to the int variable is: %d\n", ptr);
    printf("The memory address of the int variable is: %d\n", &x);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", *ptr);

    return 0;
}