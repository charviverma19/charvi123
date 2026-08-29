#include <stdio.h>
int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    if (num < 0) {
        num = -num;
    }
    long long product = 1;
    int hasOddDigit = 0;
    
    if (num == 0) {
        hasOddDigit = 0;
    } else {
        while (num > 0) {
            long long digit = num % 10;
            if (digit % 2 != 0) {
                product *= digit;
                hasOddDigit = 1;
            }
            num /= 10;
        }
    }
    if (hasOddDigit) {
        printf("Product of odd digits: %lld\n", product);
    } else {
        printf("Product of odd digits: 0 (No odd digits found)\n");
    }
    
    return 0;
}
