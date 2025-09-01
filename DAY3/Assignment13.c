#include <stdio.h>

int main() {
    //THE area of the rectangle and the perimeter
    float height,width, Area, Perimeter;
    printf("Enter the value of height:");
    scanf("%f", &height);
    printf("Enter the value of width:");
    scanf("%f", &width);
    Area=(height*width);
    printf("The Area of the rectenangle= %.2f\n", Area);
    Perimeter = 2*(height+width);
    printf("The perimeter of the rectangle= %.2f\n", Perimeter );
    return 0;
}