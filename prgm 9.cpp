#include <stdio.h>

void multiplyMatrices(int firstMatrix[][100], int secondMatrix[][100], int result[][100], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    int i, j, k;
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < columnSecond; ++j) {
            for (k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][100], int row, int column) {
    int i, j;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[100][100], secondMatrix[100][100], result[100][100], rowFirst, columnFirst, rowSecond, columnSecond;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    if (columnFirst != rowSecond) {
        printf("Matrices cannot be multiplied. Column of the first matrix should be equal to the row of the second matrix.\n");
        return 1;
    }
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);
    printf("\nFirst Matrix:\n");
    displayMatrix(firstMatrix, rowFirst, columnFirst);

    printf("\nSecond Matrix:\n");
    displayMatrix(secondMatrix, rowSecond, columnSecond);

    printf("\nResult Matrix:\n");
    displayMatrix(result, rowFirst, columnSecond);

    return 0;
}
