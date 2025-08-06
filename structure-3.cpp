#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[30];
    int roll;
    struct Date dob;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nStudent Info:\n");
    printf("Name: %s, Roll: %d\n", s.name, s.roll);
    printf("DOB: %02d-%02d-%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}

