#include <stdio.h>
#include <malloc.h>


int main() {
    char * ptr;
    ptr = (char *)malloc(5 * sizeof(char));

    if (ptr == NULL) {
        printf("Memory was not allocated");
        return 1;
    }

    printf("Memory was successfully allocated");

    free(ptr);
    return 0;
}
