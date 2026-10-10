#include <stdio.h>
int main()
{
    int K, X, Y, N, M; // k test case,x & y hoilo okkhorekha, n & m holo bindur man

    while (1) //while 1 dhore nisi, cz question e bolse, 0 nahoya porjonto loop cholbe
    {
        scanf("%d", &K); //test case input nisi

        if (K == 0)
        {
            break; // test case k jodi 0 hoy, tahole loop break diye thamay disi
        }

        scanf("%d %d", &X, &Y); //x,y ami okkhorekha dhore nisi. x okkho & y okkho

        for (int i = 0; i < K; i++) //loop test case porjonto chalaisi
        {
            scanf("%d %d", &N, &M); // input n,m nilam

            if (N == X || M == Y) //n,m jodi x or y okkho-rekhar ekdom upore hoy tahole..
            {
                printf("divisa\n");
            }
            else if (N < X && M > Y) // n jodi -n hoy & m jodi +m hoy tahole -+ 2nd quadrant
            {
                printf("NO\n");
            }
            else if (N > X && M > Y) // n jodi +n hoy & m jodi +m hoy tahole ++ 1st quadrant
            {
                printf("NE\n");
            }
            else if (N > X && M < Y) // n jodi +n hoy & m jodi -m hoy tahole +- 4th quadrant
            {
                printf("SE\n");
            }
            else
            {
                printf("SO\n"); // obosistho 3rd quadrant pore thake
            }
        }
    }
    return 0;
}
