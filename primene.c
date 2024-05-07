#include <stdio.h>
#include <conio.h>

    int main()
    {

        int n,i,j,flag;
        printf("enter the number:");
        scanf("%d",&n);

        flag=0;
         for (j=1;j<=n;j++)
        {
        if(j==1)
        {
            printf("\n  not prime ") ;
            continue;
        }

    for (i = 2; i< j; i++)
        if (j%i !=0)
            continue;
         flag = 1;
         {
            printf("\n  not prime ");
            break;
        }
    if (flag == 0) {
        printf("\n prime ");
    }
}

    return 0;
}