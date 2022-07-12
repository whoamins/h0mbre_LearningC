#include <stdio.h>


int main() {
    int scores[4][5];
    int userInput;

    for (int i = 0; i < 4; i++) {
        printf("Game #%d\n", i + 1);
        for(int j = 0; j < 5; j++) {
            printf("Enter scorring total for Player #%d: ", j + 1);
            scanf("%d", &userInput);
            scores[i][j] = userInput;
        }
    }

    int max = 0;
    int whichPlayer;
    int temp = 0;
    int avg = 0;

    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            temp += scores[j][i];
            printf("%d\n", temp);
        }

        avg = temp / 4;

        if (avg > max) {
            whichPlayer = i;
            max = avg;
        }

        temp = 0;
    }

    printf("Player #%d had the highest scoring average at %d points per game", whichPlayer + 1, max);
}
