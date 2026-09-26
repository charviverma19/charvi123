#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50];
    printf("Enter a sentence: ");
    gets(str);

    int maxLen = 0;
    char *token = strtok(str, " ");
    while(token != NULL) {
        int len = strlen(token);
        if(len > maxLen) {
            maxLen = len;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
