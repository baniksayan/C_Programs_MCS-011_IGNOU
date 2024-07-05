#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    struct Student student1;
    union Data data;

    printf("Size of Student structure: %lu\n", sizeof(student1));
    printf("Size of Data union: %lu\n", sizeof(data));

    return 0;
}
