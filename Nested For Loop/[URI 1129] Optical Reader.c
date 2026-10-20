#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            int a[5];
            int count = 0;
            char ans = '*';

            for (int j = 0; j < 5; j++)
            {
                scanf("%d", &a[j]);

                if (a[j] <= 127)
                {
                    count++;
                    ans = 'A' + j;
                }
            }

            if (count == 1)
            {
                printf("%c\n", ans);
            }
            else
            {
                printf("*\n");
            }
        }
    }

    return 0;
}
