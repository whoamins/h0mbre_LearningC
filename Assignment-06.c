/* Prompt the user for a Numerator (top number of a fraction) and a Denominator (bottom number of a fraction).
 * Tell the user whether or not there is a remainder using if control flow.
 */

#include <stdio.h>


int main() {
    int numerator = 0;
    int denominator = 0;

    scanf("%d", &numerator);
    scanf("%d", &denominator);

    if (numerator % denominator == 0) {
        printf("There is NOT a remainder!");
    } else {
        printf("There is a remainder!");
    }

    return 0;
}
