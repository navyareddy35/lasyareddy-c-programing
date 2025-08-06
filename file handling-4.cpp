#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *f;
    struct Student s;
    f = fopen("student.txt", "w");
    if (f == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fprintf(f, "%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(f);
    f = fopen("student.txt", "r");
    if (f == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("\nStudent Details from File:\n");
    fscanf(f, "%s %d %f", s.name, &s.roll, &s.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);

    fclose(f);
    return 0;
}

