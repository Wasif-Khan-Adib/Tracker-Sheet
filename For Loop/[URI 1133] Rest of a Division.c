#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a<b)
    {
        for(int i = a+1;i<b;i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }
        }
    }
    else
    {
        for(int j = b+1;j<a;j++)
        {
            if(j%5==2 || j%5==3)
            {
               printf("%d\n",j);
            }
        }
    }

    return 0;
}
