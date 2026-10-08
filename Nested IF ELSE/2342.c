#include <stdio.h>
int main()
{
    int N, P, Q;
    char C;

    scanf("%d", &N);
    scanf("%d %c %d",&P,&C,&Q);

    int result;

    if (C == '+')
    {
        result = P + Q;
    }
    else
    {
        result = P * Q;
    }

    if (result > N)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        printf("OK\n");
    }

    return 0;
    //ei code 5 bar wrong ans khaisi submit korte jaye
    //jei khane 1 bar er beshi wrong ans khai nai
}
