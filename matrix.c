#include <stdio.h>
int main() {
    int a, n;
    printf("enter the number");    
    scanf("%d %d", &a, &n);
    int i, j;
    int matrix1[m][n], matrix[m][n], matrix3[m][n];
    for (i = 0; i < a; i++) {
        for (j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            scanf("%d", &matrix2[i][j]);
    }
    for (i = 0; i < a; i++) {
        for (j = 0; j < n; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (i = 0; i < a; i++) {
        for (j = 0; j < n; j++)
            printf("%d", matrix3[i][j]);
        printf("\n");
    }
    return 0;
}
