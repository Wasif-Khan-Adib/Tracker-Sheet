#include<stdio.h>
int main()
{
    int x;
    long long m;

    while (scanf("%d %lld",&x,&m) != EOF)
    {
        if(x==0 && m==0)
        {
            break;
        }
        printf("%lld\n",x*m);
    }
    return 0;
}
