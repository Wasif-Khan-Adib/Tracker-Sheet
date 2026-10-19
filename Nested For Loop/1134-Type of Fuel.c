#include<stdio.h>
int main()
{

    int n;
    int al = 0, ga = 0, di = 0;
    for( ; ; ) //jehetu input=4 na hoya porjonto user input dite parbe tai ekta faka loop nisi
    {
        scanf("%d",&n);
        if(n==1)
        {
            al++;
        }
        else if(n==2)
        {
            ga++;
        }
        else if(n==3)
        {
            di++;
        }
        else if(n==4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",ga);
    printf("Diesel: %d\n",di);
    return 0;
}
