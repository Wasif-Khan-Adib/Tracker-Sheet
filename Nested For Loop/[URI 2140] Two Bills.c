#include <stdio.h>
int main()
{
    int N,M;

    int bill[6] = {2, 5, 10, 20, 50, 100};

    while (scanf("%d %d", &N, &M) != EOF)
    {
        if (N == 0 && M == 0)
        {
            break;
        }

        int change = M - N;
        int flag = 0;

        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                if (bill[i] + bill[j] == change)
                {
                    flag = 1;
                }
            }
        }

        if (flag == 1)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }

    return 0;
}
