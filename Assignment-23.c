#include <stdio.h>

typedef struct {
    int x;
} example;

int main() {
    example ex2;
    example *ptr = &ex2;

    ex2.x = 5;
    printf("%d\n", ex2.x);

    ptr -> x = 10;
    printf("%d\n", ex2.x);
    printf("%d\n", ptr->x);
}
