#include<stdio.h>
int main()
{
    int n,a,b;


    for( ; ; )
    {
        scanf("%d",&n);

        if(n==0)
        {
            break;
        }

        int fp=0,sp=0;

        for(int i = 0; i<n ; i++)
        {
            scanf("%d %d",&a,&b);

            if(a>b)
            {
                fp++;
            }
            else if(b>a)
            {
                sp++;
            }
        }
        printf("%d %d\n",fp,sp);
    }
    return 0;
}
