#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    float A = 3.5;
    float B = 7.5;
    float SumGrade = A + B;
    float mulA = a*A;
    float mulB = b*B;
    float sum = mulA + mulB;
    float avg = sum / SumGrade;
    printf("MEDIA = %.5f\n",avg);
    return 0;
}
