#include <stdio.h>
int main()
{
    double a,b,media;
    int x;

    for(;;)
    {
        int count = 0;
        double sum = 0;

        for(; count < 2;)
        {
            scanf("%lf",&a);

            if(a < 0 || a > 10)
            {
                printf("nota invalida\n");
            }
            else
            {
                sum = sum + a;
                count++;
            }
        }

        media = sum / 2.0;
        printf("media = %.2lf\n", media);

        for(;;)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);

            if(x == 1 || x == 2)
            {
                break;
            }
        }

        if(x == 2)
        {
            break;
        }
    }

    return 0;
}
