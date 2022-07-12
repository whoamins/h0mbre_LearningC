#include <stdio.h>
#include <stdlib.h>

#define PI 3.14


int main() {
    float radius = 0;

    scanf("%f", &radius);

    printf("%f", (radius * radius) * PI);
}