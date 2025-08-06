#include <stdio.h>

int main() {
    FILE *f;
    char ch;
    int characters = 0, words = 0, lines = 0;

    f = fopen("sample.txt", "r");
    if (f == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(f)) != EOF) {
        characters++;
        if (ch == ' ' || ch == '\t' || ch == '\n')
            words++;
        if (ch == '\n')
            lines++;
    }

    fclose(f);
    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines + 1);
    return 0;
}

