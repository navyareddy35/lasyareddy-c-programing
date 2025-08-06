#include <stdio.h>

struct DataStruct {
    int i;
    float f;
    char ch;
};

union DataUnion {
    int i;
    float f;
    char ch;
};

int main() {
    struct DataStruct ds;
    union DataUnion du;

    printf("Size of structure: %lu\n", sizeof(ds));
    printf("Size of union: %lu\n", sizeof(du));

    return 0;
}

