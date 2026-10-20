#include<stdio.h>
int main()
{
   int n;

   while (scanf("%d",&n) != EOF)
   {
       for (int i = 1; i<=n ;i=i+2)
       {
           for (int j = 1; j <= (n-i)/2; j++)
           {
               printf(" ");
           }
           for (int j = 1; j <= i ; j++)
           {
               printf("*");
           }

           printf("\n");
       }
       for (int j = 1;j<=(n-1)/2;j++)
       {
           printf(" ");
       }
       printf("*\n");

       for (int j = 1; j<=(n-3)/2;j++)
       {
           printf(" ");
       }
       printf("***\n");
       printf("\n");

   }
   return 0;
}
