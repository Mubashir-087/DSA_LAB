#include <stdio.h>
int main() {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;
    if (ptr1 == ptr2) {
        printf("Pointers are equal.\n");
    } else {
        printf("Pointers are not equal.\n");
    }
    return 0;
}
