#include <stdio.h>


typedef struct {
    int x;
    char y;
    double z;
} some_struct;

void initStruct(some_struct *someStruct) {
    someStruct -> x = 4;
    someStruct -> y = 'A';
    someStruct -> z = 65.23;
}

int main() {
    some_struct someStruct;
//  someStruct.x = 50;
//  someStruct.y = 'Y';
//  someStruct.z = 34.2;

    initStruct(&someStruct);

    printf("This is the int: %d, this is the char: %c, this is the float: %.2f",
           someStruct.x, someStruct.y, someStruct.z);

    return 0;
}
