#include <stdio.h>

int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;  // keep searching left
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;  // keep searching right
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int nums[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;
    
    printf("Enter target: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    if (first == -1 || last == -1)
        printf("-1, -1\n");
    else
        printf("First occurrence at index %d\nLast occurrence at index %d\n", first, last);

    return 0;
}
