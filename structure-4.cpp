#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    struct Rectangle r1;
    printf("Enter length and breadth: ");
    scanf("%d %d", &r1.length, &r1.breadth);

    printf("Area = %d\n", area(r1));
    return 0;
}

