#include <stdio.h>

int main() 
{
    int paycode = 0;
    while (1) 
    {
        printf("Enter paycode (1=M, 2=H, 3=C, 4=P): ");
        scanf("%d", &paycode);
        switch (paycode) 
        {
            case 1: {
                double ws = 0;
                printf("Enter weekly salary: ");
                scanf("%lf", &ws);
                printf("Manager's pay is $%.2f\n", ws);
                break;
            }
            case 2: {
                double h = 0;
                double r = 0;
                double p = 0;
                printf("Enter hours worked: ");
                scanf("%lf", &h);
                printf("Enter hourly rate: ");
                scanf("%lf", &r);

                if (h <= 40) 
                {
                    p = h * r;
                } 
                else 
                {
                    p = (40.0 * r) + ((h - 40.0) * r * 1.5);
                }
                printf("Hourly worker's pay is $%.2f\n", p);
                break;
            }
            case 3: {
                double g = 0;
                double p = 0;
                printf("Enter gross weekly sales: ");
                scanf("%lf", &g);
                p = 250.0 + (g * 0.057);
                printf("Commission worker's pay is $%.2f\n", p);
                break;
            }
            case 4: {
                int i = 0;
                double pperi = 0;
                double p = 0;
                printf("Enter number of items produced: ");
                scanf("%d", &i);
                printf("Enter wage per item: ");
                scanf("%lf", &pperi);
                p = i * pperi;
                printf("Pieceworker's pay is $%.2f\n", p);
                break;
            }
        }
    }
}