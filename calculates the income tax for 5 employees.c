#include <stdio.h>

struct Employee {
    char name[100];
    char designation[100];
    char department[100];
    float annualSalary;
    float tax;
};

int main() {
    struct Employee employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Department: ");
        scanf("%s", employees[i].department);
        printf("Annual Salary: ");
        scanf("%f", &employees[i].annualSalary);

        if (employees[i].annualSalary <= 500000) {
            employees[i].tax = 0;
        } else if (employees[i].annualSalary <= 700000) {
            employees[i].tax = 0.1 * employees[i].annualSalary;
        } else if (employees[i].annualSalary <= 1000000) {
            employees[i].tax = 0.2 * employees[i].annualSalary;
        } else {
            employees[i].tax = 0.3 * employees[i].annualSalary;
        }

        printf("\n");
    }

    printf("Income Tax Details:\n");
    printf("--------------------------------------------------\n");
    printf("Name\t\tDesignation\t\tDepartment\t\tAnnual Salary\t\tTax\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%s\t\t%s\t\t%.2f\t\t%.2f\n", employees[i].name, employees[i].designation,
               employees[i].department, employees[i].annualSalary, employees[i].tax);
    }
    printf("--------------------------------------------------\n");

    return 0;
}
