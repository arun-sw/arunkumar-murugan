#include <stdio.h>
#include <conio.h>

int fact(int n)
{
    if(n==1)

        return 1;
    return n*fact(a-1);
}
int main()
    {
    int n,sum;
    printf("enter the num:");
    scanf("%d",&n);

    sum=fact(n);
        printf(" fact is %d=%d",n,sum);
        return 0;
    }
