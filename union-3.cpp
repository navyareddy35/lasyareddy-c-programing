#include <stdio.h>

union Payment {
    float salary;
    float hourly_wage;
};

struct Employee {
    char name[20];
    char type;  
    union Payment pay;
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);
    printf("Enter employee type (F/P): ");
    scanf(" %c", &e.type);

    if (e.type == 'F') {
        printf("Enter salary: ");
        scanf("%f", &e.pay.salary);
    } else {
        printf("Enter hourly wage: ");
        scanf("%f", &e.pay.hourly_wage);
    }

    printf("\nEmployee Details:\nName: %s\n", e.name);
    if (e.type == 'F') {
        printf("Full-time Salary: %.2f\n", e.pay.salary);
    } else {
        printf("Part-time Hourly Wage: %.2f\n", e.pay.hourly_wage);
    }

    return 0;
}

