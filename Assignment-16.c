#include <stdio.h>

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%p\n", &array);
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);

    return 0;
}