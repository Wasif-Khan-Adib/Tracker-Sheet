#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int sum = 0;
    if(x<y)
    {
        int i = x;
        while(i<=y)
        {
            if(i%13 != 0)
            {
                sum = sum + i;
            }
            i++;
        }

    }
    else
    {
        int j = y;
        while(j<=x)
        {
            if(j%13 != 0)
            {
                sum = sum + j;
            }
            j++;
        }

    }
    printf("%d\n",sum);
    return 0;
}
