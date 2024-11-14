#include <stdio.h>

void equilateralTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces for center alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    equilateralTriangle(n);
    return 0;
}