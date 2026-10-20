#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for (int t = 0; t<n; t++)
    {
        int qt, s; // qt student songkha, s gopon number
        scanf("%d %d",&qt,&s);

        int bestdiff = 101; //lowest difference
        int winner = 1; //bijoyi student er position

        //student er guess input nibo
        for (int i = 1;i<=qt;i++)
        // loop student er songkha porjonto cholbe
        {
            int guess;
            scanf("%d",&guess);

            int diff = guess - s;
            //parthokkho -ve hole positive korbo
            if(diff<0)
            {
                diff = -diff;
            }
            if (diff < bestdiff)
            {
                bestdiff = diff;

                winner = i;
            }
        }
        printf("%d\n",winner);
    }
    return 0;
}
