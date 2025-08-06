#include <stdio.h>

union Mixed {
    int i;
    char str[4];
};

int main() {
    union Mixed m;

    m.i = 16909060; 

    printf("Integer: %d\n", m.i);
    printf("As bytes: %d %d %d %d\n", m.str[0], m.str[1], m.str[2], m.str[3]);

    return 0;
}

