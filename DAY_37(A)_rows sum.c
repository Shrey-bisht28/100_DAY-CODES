//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];  // Array to store sum of each row

   
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;  // Initialize sum for current row
        for(j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
