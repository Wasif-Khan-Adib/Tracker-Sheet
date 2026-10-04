#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int mulab = a*b;
    int mulcd = c*d;
    int sub = mulab - mulcd;
    printf("DIFERENCA = %d\n",sub);
    return 0;

}
