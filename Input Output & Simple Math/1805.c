#include<stdio.h>
int main()
{
    long long int a,b,sum;
    scanf("%lld %lld",&a,&b);
    sum = b*(b+1)/2-(a-1)*a/2; //2 ta interval er summation formulla
    printf("%lld\n",sum);
    return 0;
}
