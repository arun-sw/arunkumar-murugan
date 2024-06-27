#include<stdio.h>
#include<conio.h>

 int main()
        {
    int n,i,a,j,num[20];

            printf("enter the num of cout:");
            scanf("%d",&n);
            for ( i = 0; i <n ; ++i) {
                printf("enter the num:");
                scanf("%d",&num[i]);
            }
            for ( i = 0; i < n; ++i) {
                for ( j = i+1; j < n; ++j) {

                 if(num[i]>num[j]){
                     a=num[i];
                 num[i]=num[j];
                 num[j]=a;
                 }
                }
            }
            printf("this is assanding order of above number");
            for( i = 0; i <n ; ++i) {

                printf("\n%d",num[i]);
            }
            return 0;
        }
