#include <stdio.h>

int main() {
    int num, digit, count[10] = {0}, maxDigit, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;    
        count[digit]++;       
        num = num / 10;        
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", maxDigit, maxCount);

    return 0;
}
