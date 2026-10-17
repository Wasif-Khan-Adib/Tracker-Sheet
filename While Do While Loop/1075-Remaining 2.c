#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;
    while (i<10000)
    {
        if(i%n==2)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
