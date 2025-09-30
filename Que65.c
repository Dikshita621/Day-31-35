//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;  // Found the target, return index
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // Target lies in right half
        }
        else {
            high = mid - 1; // Target lies in left half
        }
    }
    return -1;  // Target not found
}

int main() {
    int n, i, target;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);
    if (result == -1) {
        printf("-1\n");
    } else {
        printf("Found at index %d\n", result);
    }
    return 0;
}
