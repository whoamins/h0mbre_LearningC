#include <stdio.h>


int main(int argc, char *argv[]) {
    if (argc == 3)
        printf("Hello, %s %s", argv[1], argv[2]);
    else
        printf("Usage: %s Firstname Lastname", argv[0]);
}
