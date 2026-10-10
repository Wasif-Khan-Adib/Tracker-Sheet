#include<stdio.h>
int main()
{
    int a,b,c,temp;
    int x,y,z;
    scanf("%d %d %d",&a,&b,&c);

    x=a,y=b,z=c; //boro theke soto ber korar por, value gulo ke abar soto theke boro korar jonno initial vabe ekhane store kore rakhlam.

    //boro theke soto ber kori..a>b>c
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a<c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b<c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    printf("%d\n%d\n%d\n",c,b,a); // c>b>a
    printf("\n"); // problem e ekta blank new line dite bolse
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}
