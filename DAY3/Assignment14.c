#include <stdio.h>
#include <math.h>

int main() {
    double num;
    double f, c;
    printf("Enter a number (+ve or -ve): ");
    scanf("%lf", &num);
    // floor() gives greatest integer <= num
    f = floor(num);
    // ceil() gives smallest integer >= num
    c = ceil(num);
    printf("Number: %.2f\n", num);
    printf("Floor value = %.0f\n", f);// the nearest less then or equals integer number
    printf("Ceiling value = %.0f\n", c);// the nearest greater than or equals integer number
     return 0;
}
