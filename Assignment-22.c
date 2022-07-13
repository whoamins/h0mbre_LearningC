#include <stdio.h>

typedef struct {
    int points;
    int games;
} player;

player players[5];

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Enter Player %d's point total: ", (i + 1));
        scanf("%d", &players[i].points);

        printf("Enter Player %d's game total: ", (i + 1));
        scanf("%d", &players[i].games);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("Player %d's avg - %.2f\n", i + 1, (float)players[i].points / (float)
        players[i].games);
    }

    return 0;
}
