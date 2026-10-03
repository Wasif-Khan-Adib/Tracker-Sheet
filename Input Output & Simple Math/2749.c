#include<stdio.h>
int main()
{
    printf("---------------------------------------\n");
    printf("|x = 35%31s|\n", "");
    printf("|%37s|\n", "");
    printf("|%15sx = 35%16s|\n", "", "");
    printf("|%37s|\n", "");
    printf("|%31sx = 35|\n", "");
    printf("---------------------------------------\n");
    return 0;
}


