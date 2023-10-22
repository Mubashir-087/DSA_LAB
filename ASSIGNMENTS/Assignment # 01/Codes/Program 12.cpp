#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p = {3, 5};
    struct Point *ptr = &p;
    printf("Coordinates: (%d, %d)\n", ptr->x, ptr->y);
    return 0;
}
