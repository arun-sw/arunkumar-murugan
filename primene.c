#include <stdio.h>



int main()
    {

        int n,v,j,flag;
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

    for (v = 2; v< j; v++)
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
