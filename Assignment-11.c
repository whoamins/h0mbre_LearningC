#include <stdio.h>


int main() {
    int number = 0;
    int avg = 0;
    char choice = 'Y';

    for (int i = 0; i < 8; i++) {
        printf("Enter a test score:");
        scanf("%d", &number);

        avg += number;

        printf("Would you like to continue?");
        scanf("%s", &choice);

        if (choice == 'N') {
            return 1;
        }
    }

    printf("%d", avg);
}