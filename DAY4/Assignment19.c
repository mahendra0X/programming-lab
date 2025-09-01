#include <stdio.h>
int main() {
    int toss;
    printf("Enter 1 for Head or 0 for Tail: ");
    scanf("%d", &toss);

    if (toss == 1)
        printf("Head\n");
    else
        printf("Tail\n");

    return 0;
}
