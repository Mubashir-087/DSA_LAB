#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr != NULL) {
        *ptr = 42;
        printf("Dynamic memory value: %d\n", *ptr);
        free(ptr);
    }
    return 0;
}
