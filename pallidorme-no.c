#include<stdio.h>
int main()
{
int n,rev=0,copy;
    printf ("enter the number:");
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
       printf("it's palindrome");
       }
else  
      {
       printf("it's not palindrome");
      }
return 0;
}
