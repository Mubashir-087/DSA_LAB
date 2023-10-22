#include <stdio.h>

int main() {
    int num = 42;
    void *ptr = &num;
    printf("Value through void pointer: %d\n", *(int *)ptr);
    return 0;
}
