#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    double D = pow(b, 2) - 4 * a * c;

    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b - sqrt(D)) / (2 * a);

    printf("x1 = %lf | x2 = %lf", x1, x2);

    return 0;
}
