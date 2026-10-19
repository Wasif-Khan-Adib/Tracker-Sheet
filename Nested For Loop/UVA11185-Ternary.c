#include <stdio.h>
int main()
{
    int n;
    for(;;)
    {
        scanf("%d", &n);

        if(n < 0)
        {
            break;
        }

        if(n == 0)
        {
            printf("0\n");
            continue;
        }

        int ternary[40]; //array size 40 dhore nisi

        int i = 0;
        for(; n > 0; n = n / 3)
        {
            ternary[i] = n % 3;
            i++;
        }

        for(int j = i - 1; j >= 0; j--)
        {
            printf("%d", ternary[j]);
        }

        printf("\n");
    }

    return 0;
}
