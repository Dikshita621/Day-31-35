//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
  #include <stdio.h>

int main() {
    int n, i, pos, element;
    scanf("%d", &n);

    int arr[n + 1];  // Array to hold existing and new element

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &element);

    // Shift elements to the right to make space at given position
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at position pos
    arr[pos] = element;

    // Print updated array
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
