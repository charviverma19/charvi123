#include <stdio.h>

void countVowelsAndConsonants(const char *str, int *vowelsCount, int *consonantsCount) {
    *vowelsCount = 0;
    *consonantsCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            (*vowelsCount)++;
        }
        else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            (*vowelsCount)++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            (*consonantsCount)++;
        }
      
        else if (ch >= 'A' && ch <= 'Z') {
            (*consonantsCount)++;
        }
    }
}

int main() {
  
    char str1[] = "hello";
    int v1, c1;
    countVowelsAndConsonants(str1, &v1, &c1);
    printf("Input: \"%s\" -> Vowels: %d, Consonants: %d\n", str1, v1, c1);

  
    char str2[] = "Python 3.10";
    int v2, c2;
    countVowelsAndConsonants(str2, &v2, &c2);
    printf("Input: \"%s\" -> Vowels: %d, Consonants: %d\n", str2, v2, c2);

    return 0;
}
