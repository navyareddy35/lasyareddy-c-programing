#include <stdio.h>

int main() {
    char str[100], *ptr;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    while(*ptr != '\0') {
        count++;
        ptr++;
    }

    printf("Length of string: %d\n", count);

    return 0;
}

