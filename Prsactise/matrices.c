#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of matrices

// Function to input a matrix
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("\nMatrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    // Input for the first matrix
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &rows1, &cols1);
    inputMatrix(mat1, rows1, cols1);

    // Input for the second matrix
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &rows2, &cols2);
    inputMatrix(mat2, rows2, cols2);

    // Display the input matrices
    displayMatrix(mat1, rows1, cols1);
    displayMatrix(mat2, rows2, cols2);

    // Matrix addition (only possible if both matrices have the same dimensions)
    if (rows1 == rows2 && cols1 == cols2) {
        addMatrices(mat1, mat2, result, rows1, cols1);
        printf("\nResult of Matrix Addition:\n");
        displayMatrix(result, rows1, cols1);
    } else {
        printf("\nMatrix addition not possible (dimensions do not match).\n");
    }

    // Matrix subtraction (only possible if both matrices have the same dimensions)
    if (rows1 == rows2 && cols1 == cols2) {
        subtractMatrices(mat1, mat2, result, rows1, cols1);
        printf("\nResult of Matrix Subtraction:\n");
        displayMatrix(result, rows1, cols1);
    } else {
        printf("\nMatrix subtraction not possible (dimensions do not match).\n");
    }

    // Matrix multiplication (possible if columns of mat1 == rows of mat2)
    if (cols1 == rows2) {
        multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
        printf("\nResult of Matrix Multiplication:\n");
        displayMatrix(result, rows1, cols2);
    } else {
        printf("\nMatrix multiplication not possible (columns of mat1 do not match rows of mat2).\n");
    }

    return 0;
}
