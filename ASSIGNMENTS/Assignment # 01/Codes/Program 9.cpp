#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int main() {
    int (*ptr)(int, int) = &add;
    printf("Sum: %d\n", ptr(5, 7));
    return 0;
}
