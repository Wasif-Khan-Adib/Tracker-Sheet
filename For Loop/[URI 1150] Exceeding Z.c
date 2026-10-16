#include<stdio.h>
int main()
{
    int x,z;
    scanf("%d %d",&x,&z);

    while(z <= x)
    {
        scanf("%d",&z);
    }
    int sum = 0;
    int count = 0;
    for(int i = x; sum <= z;i++) //sum jotokkhon z er soman hobe...
    {
        sum = sum + i;
        count++;
    }
    printf("%d\n",count);
    return 0;

}

