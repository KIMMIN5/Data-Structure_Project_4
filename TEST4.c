#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, non_zeros, i, j, k, tmp;
    int* matrix, * transpose;

    printf("Enter the size of rows and columns, the number of non-zero terms : ");
    scanf("%d %d %d", &rows, &cols, &non_zeros);

    matrix = (int*)malloc(rows * cols * sizeof(int));
    transpose = (int*)malloc(rows * cols * sizeof(int));

    printf("Enter the row, columns, and value pairs in order : \n");
    for (i = 0; i < non_zeros; i++) {
        scanf("%d %d %d", &j, &k, &tmp);
        matrix[j * cols + k] = tmp;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j * rows + i] = matrix[i * cols + j];
        }
    }

    printf("The transposed matrix is : \n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i * rows + j]);
        }
        printf("\n");
    }

    free(matrix);
    free(transpose);

    return 0;
}