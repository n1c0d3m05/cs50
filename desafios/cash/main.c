#include <stdio.h>
#include <cs50.h>





int main(int argc, char const *argv[])
{
    int total = 0;
    int c;
    int vc = 25;
    int cc = 5;
    int d = 10;
    int u = 1;

    do
    {
        c = get_int("quanto devo: ");
    } while (c < 0);
    // enquanto c  for maior que 0
    while (c > 0)
    {
        if (c >= vc)
        {
            c -= vc;
            total++;
        }else if (c >= d)
        {
            c -= d;
            total++;
        }else if (c >= cc)
        {
            c -= cc;
            total++;
        }else
        {
            c -= u;
            total++;
        }
    }
    printf("%i", total);


    return 0;
}
