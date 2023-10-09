#include <stdio.h>

int josephus(int n, int k) {
    if (n == 1) {
        return 0; // Only one person remains, so position 0.
    } else {
        return (josephus(n - 1, k) + k) % n;
    }
}

int main() {
    int n, k;
    printf("Enter the number of people (n): ");
    scanf("%d", &n);
    printf("Enter the interval (k): ");
    scanf("%d", &k);

    int position = josephus(n, k);
    printf("The person at position %d survives.\n", position + 1); // Add 1 to convert from 0-based to 1-based indexing

    return 0;
}
