#include<stdio.h>
int main()
{
    int n,max,pos;
    int i = 1;
    while(i<=100)
    {
        scanf("%d",&n);

        if(i==1) // first digit ke max dhore nisi
        {
            max = n;
            pos = i;
        }
        if(n>max)
        {
            max = n;
            pos = i;
        }
        i++;
    }
    printf("%d\n",max);
    printf("%d\n",pos);

    return 0;
}

