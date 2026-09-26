#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);

    char *wordStart = NULL;
    for(int i = 0; str[i] != '\0'; i++) {
        if(wordStart == NULL && str[i] != ' ')
            wordStart = &str[i];
        if(wordStart && (str[i+1] == ' ' || str[i+1] == '\0')) {
            reverseWord(wordStart, &str[i]);
            wordStart = NULL;
        }
    }

    printf("Output: %s\n", str);
    return 0;
}
