#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int k;
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        if(n%10 != 0) //check kortesi last digit not equal 0 kina?
        {
            n--; //jodi 0 na hoy, tahole joto bar loop cholbe, totobar n er man ek kore komay dicchi
        }

        else //jodi last digit 0 hoy.
        {
            n=n/10; //simply n ke 10 diye vag kore dicci and vagfol n er moddhe store kortesi.
        }
    }
    printf("%d",n); // n er new stored value print kore dicci
    return 0;
}
