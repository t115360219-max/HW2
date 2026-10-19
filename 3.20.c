#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double hours = 0;
    double rate = 0;
    double salary = 0;
    while (1) 
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hours);
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);
        if (hours <= 40) 
        {
            salary = hours * rate;
        } 
        else 
        {
            salary = (40.0 * rate) + ((hours - 40.0) * rate * 1.5);
        }
        printf("Salary is $%.2f\n", salary);
    }
}