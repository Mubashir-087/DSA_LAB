#include <stdio.h>
struct Student {
    char name[50];
    int age;
};
int main() {
    struct Student students[3];
    struct Student *ptr = students;
    ptr->age = 20;
    printf("Age of first student: %d\n", ptr->age);
    return 0;
}
