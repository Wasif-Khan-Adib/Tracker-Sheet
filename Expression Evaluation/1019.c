#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int hr = n / 3600;
    n = n % 3600;
    int min = n / 60;
    int sec = n % 60;

    printf("%d:%d:%d\n",hr,min,sec);
    return 0;
}
