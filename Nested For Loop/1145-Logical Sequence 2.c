#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    for(int i = 1;i <= y; i=i+x)
    {
        for ( int j = i;j<i+x;j++)
        {
         printf("%d",j);

             if(j<i+x-1)
            {
                printf(" ");
            }

        }

        printf("\n");
    }
    return 0;
}
