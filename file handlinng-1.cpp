#include <stdio.h>

int main() {
    FILE *f;
    char str[100];
    f = fopen("example.txt", "w");
    if (f == NULL) {
        printf("File creation failed.\n");
        return 1;
    }
    printf("Enter a string to write to file: ");
    gets(str);
    fputs(str, f);
    fclose(f);
    f = fopen("example.txt", "r");
    if (f == NULL) {
        printf("File not found.\n");
        return 1;
    }
    printf("Reading from file:\n");
    while (fgets(str, 100, f) != NULL) {
        printf("%s", str);
    }
    fclose(f);

    return 0;
}

