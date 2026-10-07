#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        long long int n;
        scanf("%lld",&n);
        long long int poss_way = (n-1)/2;
        printf("%d\n",poss_way);
    }
    return 0;
}
