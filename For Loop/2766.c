#include<stdio.h>
int main()
{
    char n[10][31]; //10 size er character array nilam then protitay 30 ta alpabet and nul char rakhar jonno arekta 31 size er array nilam
    for(int i = 0; i<10; i++) // 10 ta nam er jonno 10 bar input nibo , tai loop 10 porjonto chalaisi
    {
        scanf("%s",n[i]); //
    }
    for(int i = 0; i<10; i++)
    {
        if(i==2 || i==6 || i==8) //jekono ekta sotto holei oi index er char print korbe.
        {
            printf("%s\n",n[i]);
        }
    }
    return 0;
}
