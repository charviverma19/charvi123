//Complement of a Binary Number.
#include <stdio.h>

int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    long long complement = 0;
    long long multiplier = 1;
    long long temp = binary;
    
    if (binary == 0) {
        complement = 1;
    } else {
        while (temp > 0) {
            long long digit = temp % 10;
            long long flippedDigit = (digit == 0) ? 1 : 0;
            complement = complement + (flippedDigit * multiplier);
            multiplier *= 10;
            temp /= 10;
        }
    }
    
    printf("1's complement: %lld\n", complement);
    
    return 0;
}
