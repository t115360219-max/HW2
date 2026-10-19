#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double sales = 0;
    double salary = 0;

    while (1) 
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
        if (sales == -1) 
        {
            break;
        }
        salary = 200.0 + (sales * 0.09);
        printf("Salary is: $%.2f\n", salary);
    }
}