#include <stdio.h>
#include <conio.h>

int main() {
    int a, n;
    printf("enter the number");
    scanf("%d %d", &a, &n);
    int i, j;
    int mat1[m][n], mat2[m][n], mat3[m][n];
    for (i = 0; i < a; i++) {
        for (j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            scanf("%d", &mat2[i][j]);
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < n; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < n; j++)
            printf("%d", mat3[i][j]);
        printf("\n");
    }

    return 0;
}
