#include <stdio.h>
#include <stdlib.h>

int main() 
{
    for (int i = 1; i <= 10; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) 
    {
        for (int j = 1; j <= 11 - i; j++) 
        {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) 
    {
        for (int j = 1; j < i; j++) 
        {
            printf("%s", " ");
        }
        for (int j = 1; j <= 11 - i; j++) 
        {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) 
    {
        for (int j = 1; j <= 10 - i; j++) 
        {
            printf("%s", " ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}