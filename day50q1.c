#include <stdio.h>

int main() {
    int day, year;
    char month[3];

    // Input in dd/04/yyyy format
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%s/%d", &day, month, &year);

    // Replace numeric month "04" with "Apr"
    printf("Converted Date: %02d-Apr-%d\n", day, year);

    return 0;
}
