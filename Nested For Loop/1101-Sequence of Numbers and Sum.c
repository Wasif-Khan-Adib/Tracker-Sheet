#include <stdio.h>

int main()
{
    int M, N;

    for (;;)
    {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0)
        {
            break;
        }

        if (M > N)
        {
            int temp = M;
            M = N;
            N = temp;
        }

        int sum = 0;

        for (int i = M; i <= N; i++)
        {
            printf("%d ", i);
            sum = sum + i;
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}
