#include <stdio.h>
int main()
{
    int p, code, q;
    double total = 0; //shuru te total 0 kore nilam.

    scanf("%d", &p); //joto gulo product kinbo, segulo input nilam.

    for (int i = 1; i <= p; i++) //loop cholbe, oi songkhok product porjonto
    {
        scanf("%d %d", &code, &q); //protita product er moddhe, tar code number and price input nilam.

        if (code == 1001) //condition diye product check kortesi
        {
            total = total + (1.50 * q); // * er kaj agee hobe, then total er sathe jog hobe .
             // total hisab kortesi. product er price and quantity gun kore dicchi.
             // ei total value ta uporer total e giye store hobe.
        }
        else if (code == 1002)
        {
            total = total + (2.50 * q); // purber total er sathe, new product er price and quantity gun kore , then jog kore dicci.
        }
        else if (code == 1003)
        {
            total = total + (3.50 * q);
        }
        else if (code == 1004)
        {
            total = total + (4.50 * q);
        }
        else if (code == 1005)
        {
            total = total + (5.50 * q);
        }
    }

    printf("%.2lf\n", total); // ekhane total value ta print hocche.

    return 0;
}
