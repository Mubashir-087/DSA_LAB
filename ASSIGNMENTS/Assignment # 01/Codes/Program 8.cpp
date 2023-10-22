#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int (*ptr)[5] = &arr;
    printf("First element: %d\n", (*ptr)[0]);
    return 0;
}
