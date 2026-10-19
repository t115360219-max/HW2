#include <stdlib.h>
#include <stdio.h>

int main()
{
    int account = 0;
    double beginning = 0;
    double charges = 0;
    double credits = 0;
    double limit = 0;
    double balance = 0;
    while (1)
    {
        printf("Enter account number (-1 to end):\n");
        scanf("%d" , &account);
        if (account == -1)
            break;
        printf("Enter beginning balance:\n");
        scanf("%lf" , &beginning);
        printf("Enter total charges:\n");
        scanf("%lf" , &charges);
        printf("Enter total credits:\n");
        scanf("%lf" , &credits);
        printf("Enter credit limit:");
        scanf("%lf" , &limit);
        balance = beginning + charges - credits;
        if (balance > limit)
        {
            printf("Account:    %d\n" , account);
            printf("Credit limit:    %f\n" , limit);
            printf("Balance:    %f\n" , balance);
            printf("Credit limit exceeded.\n");
        }
        printf("\n");
    }
    
   
   
    

}

