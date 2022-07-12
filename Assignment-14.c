#include <stdio.h>


int main() {
    int x = 5;
    int *p = &x;

    printf("Values stored in x - %d |"
           "Address stored in p pointer - %p | Address of p - %p", *p, p, &p);

    return 0;
}