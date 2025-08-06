#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;

    d.i = 10;
    printf("After assigning int: %d\n", d.i);

    d.f = 3.14;
    printf("After assigning float: %f\n", d.f);

    d.ch = 'A';
    printf("After assigning char: %c\n", d.ch);

    printf("Accessing all fields:\n");
    printf("Int: %d, Float: %f, Char: %c\n", d.i, d.f, d.ch);

    return 0;
}
