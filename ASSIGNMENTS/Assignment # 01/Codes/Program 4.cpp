#include <stdio.h>
void increment(int *x) {
    (*x)++;
}
int main() {
    int num = 5;
    increment(&num);
    printf("Incremented value: %d\n", num);
    return 0;
}
