#include<stdio.h>
int main()
{
    int n, votes, max;

    scanf("%d",&n);
    scanf("%d",&max);

    int carlos = max;

    for (int i = 2; i<=n ; i++)
    {
        scanf("%d",&votes);

        if(votes > max)
        {
            max = votes;
        }
    }
    if(carlos == max)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}
