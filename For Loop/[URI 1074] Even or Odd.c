#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int x;

    for(int i=0;i<n;i++)
    {
        scanf("%lld",&x);
        if (x==0)
        {
            printf("NULL\n");
        }
        else if(x%2==0)
        {
            printf("EVEN");

            if(x>0)
            {
                printf(" POSITIVE\n");
            }
            else
            {
                printf(" NEGATIVE\n");
            }
        }
        else
        {
            printf("ODD");

            if(x>0)
            {
                printf(" POSITIVE\n");
            }
            else
            {
                printf(" NEGATIVE\n");
            }
        }
    }
    return 0;
}
