#include <stdio.h>

void toUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }
}

int main() {
    
    char str1[] = "coding";
    printf("Before: %s -> ", str1);
    toUppercase(str1);
    printf("After: %s\n", str1);


    char str2[] = "Let's Code! 123";
    printf("Before: %s -> ", str2);
    toUppercase(str2);
    printf("After: %s\n", str2);

    return 0;
}
