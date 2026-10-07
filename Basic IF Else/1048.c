#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    if(n>0 && n<=400)
    {
        printf("Novo salario: %.2f\n",(n*0.15)+n);
        printf("Reajuste ganho: %.2f\n",(n*.15+n)-n);
        printf("Em percentual: 15 %%\n");
    }
    else if(n>400 && n<=800)
    {
        printf("Novo salario: %.2f\n",(n*0.12)+n);
        printf("Reajuste ganho: %.2f\n",(n*.12+n)-n);
        printf("Em percentual: 12 %%\n");
    }
     else if(n>800 && n<=1200)
    {
        printf("Novo salario: %.2f\n",(n*0.10)+n);
        printf("Reajuste ganho: %.2f\n",(n*.10+n)-n);
        printf("Em percentual: 10 %%\n");
    }
     else if(n>1200 && n<=2000)
    {
        printf("Novo salario: %.2f\n",(n*0.07)+n);
        printf("Reajuste ganho: %.2f\n",(n*.07+n)-n);
        printf("Em percentual: 7 %%\n");
    }
    else if(n>2000)
    {
        printf("Novo salario: %.2f\n",(n*0.04)+n);
        printf("Reajuste ganho: %.2f\n",(n*.04+n)-n);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
