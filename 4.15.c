#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double investment = 5000;
    int years = 15;
    double rate;
    double total;
    for (int i = 100; i <= 120; i = i + 5)
    {
        rate = i / 1000.0;
        total = investment * pow(1 + rate , years);
        printf ("%d\t%lf\t%lf\n" , years , rate * 100 , total);
    }
}