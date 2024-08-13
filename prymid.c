#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, s, k = 0;
    printf("enter the number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++, k = 0) {
        for (s = 1; s <= n - i; s++) {

            printf("  ");

        }
        while (k != 2 * i - 1) {
            printf(" %d",i);
            k++;
        }
        printf("\n");
    }
    return 0;
}

