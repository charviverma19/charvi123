#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
