#include <stdio.h>
#include <math.h>

int main() {
    float P, r, t, n, A, CI;

    // Input principal, rate, time, and number of compounding per year
    printf("Enter the Principal (P): ");
    scanf("%f", &P);

    printf("Enter the Annual Interest Rate (in %%): ");
    scanf("%f", &r);

    printf("Enter the Time (in years): ");
    scanf("%f", &t);

    printf("Enter the Number of times interest is compounded per year (n): ");
    scanf("%f", &n);

    // Formula: A = P * (1 + r/(100*n))^(n*t)
    A = P * pow((1 + (r / (100 * n))), n * t);

    // Compound Interest = A - P
    CI = A - P;

    printf("\nFinal Amount (A) = %.2f", A);
    printf("\nCompound Interest (CI) = %.2f\n", CI);
    
    return 0;
}
