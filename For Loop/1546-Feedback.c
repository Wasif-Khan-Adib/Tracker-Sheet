#include<stdio.h>
int main()
{
    int n; //test case nilam
    scanf("%d",&n); //test case input nilam
    int k; //protiti test case er jonno koyti kore input nibo,seta k diye bole dilam
    int c; // c means catagory
    for(int i=1;i<=n;i++) //test case porjonto loop use korlam.
    {
        scanf("%d",&k); //protita test case er jonno k er value input nilam

        for(int j =1;j<=k;j++) // toto songkhok k er value er jonno arekta loop use korlam
        {
            scanf("%d",&c); // ebar k loop er moddhe c input nilam. amra chai k er value = catagory check hok

            //condition diye check kortesi sob

            if(c==1)
            {
                printf("Rolien\n");
            }
            else if(c==2)
            {
                printf("Naej\n");
            }
            else if(c==3)
            {
                printf("Elehcim\n");
            }
            else if(c==4)
            {
                printf("Odranoel\n");
            }
        }
    }
    return 0;
}
