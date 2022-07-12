#include <stdio.h>

int main() {
    int intarray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("The array has %d elements.", sizeof(intarray) / sizeof(intarray[0]));
}