//Toeplitz Matrix
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100];
    int isToeplitz = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 1; i < rows; i++) {
        for(j = 1; j < cols; j++) {
            if(matrix[i][j] != matrix[i-1][j-1]) {
                isToeplitz = 0;
                break;
            }
        }
        if(isToeplitz == 0)
            break;
    }

    if(isToeplitz)
        printf("Matrix is Toeplitz\n");
    else
        printf("Matrix is Not Toeplitz\n");

    return 0;
}