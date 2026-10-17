#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int amount;
    char type;
    int t=0,c=0,r=0,s=0;
    for(int i = 0; i<n; i++)
    {
        scanf("%d %c",&amount, &type);

        if(type == 'C')
        {
            c=c+amount;
        }
        else if(type == 'R')
        {
            r=r+amount;
        }
         else if(type == 'S')
        {
            s=s+amount;
        }
    }

    t = c + r+ s;

    double pc=(c*100.0)/t;
    double pr=(r*100.0)/t;
    double ps=(s*100.0)/t;

    printf("Total: %d cobaias\n",t);

    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);

    printf("Percentual de coelhos: %.2lf %%\n",pc);
    printf("Percentual de ratos: %.2lf %%\n",pr);
    printf("Percentual de sapos: %.2lf %%\n",ps);

    return 0;
}
