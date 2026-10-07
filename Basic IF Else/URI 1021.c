#include <stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);

    int value = (n * 100) + 0.5; //say 576.73 = 57673, poisa kore nilam. .5 add korsi, routing value error samlanor jonno

    int note100 = value / 10000; //100tk=100*100=10 hajar poisa,tari 10 hajar diye
    value = value % 10000;

    int note50 = value / 5000;
    value = value % 5000;

    int note20 = value / 2000;
    value = value % 2000;

    int note10 = value / 1000;
    value = value % 1000;

    int note5 = value / 500;
    value = value % 500;

    int note2 = value / 200;
    value = value % 200;

    //eibar coin er kaj korsi

    int coin1 = value / 100; //1coin=100poisa
    value = value % 100;

    int coin50 = value / 50;
    value = value % 50;

    int coin25 = value / 25;
    value = value % 25;

    int coin10 = value / 10;
    value = value % 10;

    int coin5 = value / 5;
    value = value % 5;

    int coin01 = value / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",note100);
    printf("%d nota(s) de R$ 50.00\n",note50);
    printf("%d nota(s) de R$ 20.00\n",note20);
    printf("%d nota(s) de R$ 10.00\n",note10);
    printf("%d nota(s) de R$ 5.00\n",note5);
    printf("%d nota(s) de R$ 2.00\n",note2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",coin1);
    printf("%d moeda(s) de R$ 0.50\n",coin50);
    printf("%d moeda(s) de R$ 0.25\n",coin25);
    printf("%d moeda(s) de R$ 0.10\n",coin10);
    printf("%d moeda(s) de R$ 0.05\n",coin5);
    printf("%d moeda(s) de R$ 0.01\n",coin01);

    return 0;
}
