#include <stdio.h>

int main() {
    float a, b;
    float x, y, z, d;

    printf("Enter a:\n");
    scanf("%f", &a);

    printf("Enter b:\n");
    scanf("%f", &b);

    x = a + b;
    y = a - b;
    z = a * b;
    d = a / b;
    printf("Division: %f\n",d); 
    printf("Addition: %f\n", x);
    printf("Subtraction: %f\n", y);
    printf("Multiplication: %f\n", z);

    return 0;
}
