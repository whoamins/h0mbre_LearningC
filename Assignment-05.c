#include <stdio.h>


int main() {
    int seconds = 0;

    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = (seconds - (hours * 3600)) / 60;
    int r_seconds = (seconds - (hours * 3600) - (minutes * 60));

    printf("Hours: %d | Minutes: %d | Seconds: %d", hours, minutes, r_seconds);
}
