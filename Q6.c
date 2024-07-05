#include <stdio.h>
struct employee
{
    float basic_salary;
    float grade_pay;
    float TA;
    float DA;
    float loans;
    float tax;
    float LIC;
};

int main()
{
    struct employee emp;
    float gross_salary, net_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &emp.basic_salary);

    printf("Enter the grade pay: ");
    scanf("%f", &emp.grade_pay);

    printf("Enter the TA: ");
    scanf("%f", &emp.TA);

    printf("Enter the DA: ");
    scanf("%f", &emp.DA);

    printf("Enter the loans: ");
    scanf("%f", &emp.loans);

    printf("Enter the tax: ");
    scanf("%f", &emp.tax);

    printf("Enter the LIC: ");
    scanf("%f", &emp.LIC);

    gross_salary = emp.basic_salary + emp.grade_pay + emp.TA + emp.DA;
    net_salary = gross_salary - emp.loans - emp.tax - emp.LIC;

    printf("Gross Salary: $%.2f\n", gross_salary);
    printf("Net Salary: $%.2f\n", net_salary);

    return 0;
}
