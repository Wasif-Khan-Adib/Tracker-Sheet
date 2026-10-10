#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,R1,R2,det;

    scanf("%lf %lf %lf",&a,&b,&c);

    det=b*b - 4*a*c;

    if (a == 0 || det < 0) // kono kisu ke 0 diye vag korle 0 asbe, abar neg number 0 er theke soto
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-b + sqrt(det)) / (2*a);
        R2 = (-b - sqrt(det)) / (2*a);

        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }

    return 0;
}
