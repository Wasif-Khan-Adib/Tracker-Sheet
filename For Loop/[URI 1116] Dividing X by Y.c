#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i<n;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        if(y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            double div = (double)x / y; // amra always floating point neoyar jonno (double)x korbo. 3/2=1.5 asbe.
                                            //(double) na nile only 1.0 asbe.
            printf("%.1lf\n",div);
        }
    }
    return 0;
}
