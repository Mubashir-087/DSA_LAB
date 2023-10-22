#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int main() {
    int (*ptr1)(int, int) = &add;
    int (*ptr2)(int, int) = &subtract;
    printf("Sum: %d\n", ptr1(5, 7));
    printf("Difference: %d\n", ptr2(10, 3));
    return 0;
}
