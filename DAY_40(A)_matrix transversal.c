//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Read elements of the matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    // Traverse diagonals
    for(int d = 0; d < rows + cols - 1; d++) {
        int r = (d < rows) ? d : rows - 1;
        int c = d - r;

        while(r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
        printf("\n");
    }

    return 0;
}
