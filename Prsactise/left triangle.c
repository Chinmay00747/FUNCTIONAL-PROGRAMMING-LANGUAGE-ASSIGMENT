#include <stdio.h>

void leftInvertedTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        // Print stars equal to the row number
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    leftInvertedTriangle(n);
    return 0;
}
