#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    float root1 , root2;

    root1 = (-b + sqrt((pow(b,2) - 4*a*c)))/2*a;
    root2 = (-b - sqrt((pow(b,2) - 4*a*c)))/2*a;

    printf("The roots: %f and %f" , root1 , root2);
    return 0 ;

}