#include <stdio.h>

int main() {
    int num;
    int binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

  
    while (num > 0) {
        int rem = num % 2;          
        binary = binary + rem * place
        place = place * 10;         
        num = num / 2;           
    }

    printf("Binary representation: %d\n", binary);

    return 0;
}
