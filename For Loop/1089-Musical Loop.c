#include <stdio.h>
int main()
{
    int n;

    // input sofol hole & n =0 na hole loop cholte thakbe
    while (scanf("%d", &n) == 1 && n != 0)
    {
        int h[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &h[i]); // protiti value array er i index e rakhsi
        }

        int count = 0; // total peak hisab er jonno count er man initial vale 0 rakhlam
        for (int i = 0; i < n; i++)
        {
            int prev, next; // ager and porer sample er index rakhbo

            if (i == 0) // present sample first element hoy
            {
                prev = n - 1; // tahole tar ageer sample ,shesh element hobe
            }
            else
            {
                prev = i - 1; // present sample jodi first element na hoy, tahole prev hobe tar ageer ta mane i - 1
            }

            if (i == n - 1) // present sample jodi last element hoy
            {
                next = 0; // tar porer element hobe 0 index er element
            }
            else
            {
                next = i + 1; // present jodi last sample na hy, tahole tarporer ta 1 jog hobe
            }

            if ((h[i] > h[prev] && h[i] > h[next]) || //present value 2 pasher cheye boro
                (h[i] < h[prev] && h[i] < h[next])) //or 2 pasher cheye soto hole
            {
                count++; // count e peak 1 kore baray dibo
            }
        }

        printf("%d\n", count); // count er latest value print hobe
    }

    return 0;
}
