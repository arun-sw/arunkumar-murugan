#include <stdio.h>
#include<cinio.h>
int fact(int b)
{
    if(n==1)
        return 1;
    return b*fact(b-1);
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
