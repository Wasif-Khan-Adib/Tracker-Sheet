#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);

    double area;
    double mul = a * a;
    area=3.14159 * mul;

    printf("A=%.4lf\n",area);
    return 0;
}
