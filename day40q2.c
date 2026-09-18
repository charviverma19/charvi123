#include <stdio.h>

int main() {
    int a[10][10], b[10][10], product[10][10];
    int rows1, cols1, rows2, cols2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible (cols of A != rows of B).\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            for(k = 0; k < cols1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
