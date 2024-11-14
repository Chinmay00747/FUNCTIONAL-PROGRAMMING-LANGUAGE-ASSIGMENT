#include <stdio.h>

void rightTriangleLeft(int n) {
    for (int i = 1; i <= n; i++) {
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
    rightTriangleLeft(n);
    return 0;
}