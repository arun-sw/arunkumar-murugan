#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



void add(int m[3][3], int n[3][3], int sum[3][3])
{
    int i,j;
    for (i  =0;  i< 3; i++) {
        for ( j = 0; j <3 ; ++j) {
            sum[i][j]=m[i][j]+n[i][j];

        }

    }
}


void sub(int m[3][3], int n[3][3], int sum[3][3])
{
    int i,j;
    for (i  =0;  i< 3; i++) {
        for ( j = 0; j <3 ; ++j) {
            sum[i][j]=m[i][j]-n[i][j];

        }

    }
}

void transpose(int n[3][3],int t[3][3])
{
    int i,j;
    for (i  =0;  i< 3; i++) {
        for ( j = 0; j <3 ; ++j) {
            t[j][i]=n[i][j];
        }

    }
}
void display(int matrix[3][3])
{
    int i,j;
    for (i  =0;  i< 3; i++) {
        for ( j = 0; j <3 ; ++j) {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");

    }
}
void main() {
    int m[3][3] = {3, 4, 5, 6, 7, 8, 9, 1, 3};
    int n[3][3] = {9, 8, 7, 8, 3, 4, 5, 6, 8};
    int c[3][3], choise;

    printf("frist matrix\n");
    display(m);
    printf("second matrix\n");
    display(n);
    do {
        printf("choose the matrix oppretion\n");
        printf("**********************************************************\n");
        printf("1.addtion oppresion\n");
        printf("2.subtrection oppresion\n");
        printf("3.transpose oppresion\n");
        printf("4.exit.....\n");
        printf("enter the choise\n");
        scanf("%d",&choise);

        switch (choise) {
            case 1:
                add(m, n, c);
                printf("sum of matrix\n");
                display(c);
                break;
            case 2:
                sub(m, n, c);
                printf("subtrection of matrix\n");
                display(c);
                break;
            case 3:
                printf("transpose\n");
                transpose(m,n);
                display(n);
                break;
            case 4:
                printf("exit............");
                exit(0);
            default:
                printf("invalid oppretion");
        }
    }
while(1);
getch();
}
