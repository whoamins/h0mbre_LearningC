#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int heads = 0;
    int tails = 0;
    int userInput;
    int randNum;

    srand(time(NULL));

    scanf("%d", &userInput);

    for(int i = 0; i < userInput; i++) {
        randNum = rand() % 2;

        if(randNum == 1) {
            heads++;
        } else {
            tails++;
        }
    }

    printf("Heads: %d\n", heads);
    printf("Tails: %d", tails);
}