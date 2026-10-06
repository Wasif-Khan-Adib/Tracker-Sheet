#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double sum_tr_a = a + b; //trivujer 2 side er sum
    double sum_tr_b = b + c; // opor 2 side
    double sum_tr_c = c + a; // opor 2 side
    double area_tr = a + b + c; // 3 side er sum = area
    double area_trapizium = (sum_tr_a * c)/2; // trapizium er formulla

    if(sum_tr_a > c && sum_tr_b > a && sum_tr_c > b) // sum of 2 side always greater than 3rd side
    {
        printf("Perimetro = %.1lf\n",area_tr);
    }
    else
    {
        printf("Area = %.1lf\n",area_trapizium);
    }
    return 0;
}
