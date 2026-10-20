#include<stdio.h>
int main()
{
    int x;

    while(scanf("%d",&x) != EOF)
    {
        if(x==0)
        {
            break;
        }
        for(int i = 1; i <= x ; i++)
        {
           if(i > 1)
           {
               printf(" ");
           }

           printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}
