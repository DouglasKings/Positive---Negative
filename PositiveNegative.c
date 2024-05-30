#include <stdio.h>
//Function Prototype
void calculateNumber(double Number);

int main() {
    double Number;

    printf("Enter the first number: ");
    scanf("%lf", &Number);

    calculateNumber(Number);

    return 0;
}

//Function definition
void calculateNumber(double Number) {
    if (Number > 0) {
        printf("The number is positive.\n");
    } else if (Number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("Invalid number.\n");
    }
}