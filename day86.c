#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int num1, num2, choice;

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case ADD:
            printf("Result = %d\n", num1 + num2);
            break;

        case SUBTRACT:
            printf("Result = %d\n", num1 - num2);
            break;

        case MULTIPLY:
            printf("Result = %d\n", num1 * num2);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
