#include <stdio.h>

int main() {
    double base_salary, hra, ta, da, gross_salary;

    // Input base salary
    printf("Enter the base salary of the employee: ");
    scanf("%lf", &base_salary);

    // Calculate components
    hra = 0.20 * base_salary;
    ta  = 0.10 * base_salary;
    da  = 0.05 * base_salary;

    // Calculate gross salary
    gross_salary = base_salary + hra + ta + da;

    // Output result
    printf("\nBase Salary: %.2lf\n", base_salary);
    printf("HRA (20%%): %.2lf\n", hra);
    printf("TA (10%%): %.2lf\n", ta);
    printf("DA (5%%): %.2lf\n", da);
    printf("---------------------------\n");
    printf("Gross Salary: %.2lf\n", gross_salary);

    return 0;
}