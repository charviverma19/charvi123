#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, temp, digits = 0, pow10 = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;  

    while (temp >= 10) {
        temp /= 10;
        digits++;
        pow10 *= 10;         
    }
    firstDigit = temp;  
  int middle = num % pow10;       
    middle /= 10;                  

    int swapped = lastDigit * pow10 + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
