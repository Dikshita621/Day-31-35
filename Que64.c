/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    char num[100];
    int count[10] = {0};  // Array to hold count of each digit 0-9
    int i, maxCount = 0, maxDigit = 0;

    // Read the input number as string
    scanf("%s", num);

    // Count occurrences of each digit
    for (i = 0; num[i] != '\0'; i++) {
        count[num[i] - '0']++;
    }

    // Find the digit with the maximum count
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    // Print the digit that occurs most
    printf("%d\n", maxDigit);

    return 0;
}
