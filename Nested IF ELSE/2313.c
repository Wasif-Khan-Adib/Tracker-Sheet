#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && b+c>a && a+c>b) // check kortesi trivuj hoy ki na
    {
       if(a==b && b==c) //jodi hoy tahole somobahu trivuj ki na
       {
           printf("Valido-Equilatero\n");

           if(a*a==b*b + c*c || b*b== a*a + c*c || c*c==a*a + b*b) // jodi somobahu hoy, tahole dekhtesi ekhon somokoni ki na;
           {
               printf("Retangulo: S\n");
           }
           else
           {
               printf("Retangulo: N\n");
           }
       }
       else if(a==b || b==c || a==c) //check kortesi somodi-bahu ki na
       {
           printf("Valido-Isoceles\n");

            if(a*a==b*b + c*c || b*b== a*a + c*c || c*c==a*a + b*b)
           {
               printf("Retangulo: S\n");
           }
           else
           {
               printf("Retangulo: N\n");
           }

       }
       else if(a!=b || b!=c || c!=a)
       {
           printf("Valido-Escaleno\n");

            if(a*a==b*b + c*c || b*b== a*a + c*c || c*c==a*a + b*b)
           {
               printf("Retangulo: S\n");
           }
           else
           {
               printf("Retangulo: N\n");
           }
       }
    }
    else // kono trivuj na hole invalido print kore dicchi
    {
        printf("Invalido\n");
    }
    return 0;
}
