#include<stdio.h>
int main()
{
int n,rev=0;
int copy;
    printf ("enter the n:");
    scanf("%d",&n);
    copy =n;
while(copy>0)
      {  
       rev=rev*10;
       rev=rev +(copy%10);
       copy=copy/10;
       }
if(n==rev)

      {
       printf("ama");
       }
else  
      {
       printf("illa");
      }
return 0;
}
