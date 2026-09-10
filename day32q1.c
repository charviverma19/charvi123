#include <stdio.h>

int main() {
    int a[5], b[5], c[10];
    int i, j, n1 = 5, n2 = 5;

    printf("Enter 5 elements for first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter 5 elements for second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[i] = a[i];
    for(j = 0; j < n2; j++)
        c[n1 + j] = b[j];

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}
