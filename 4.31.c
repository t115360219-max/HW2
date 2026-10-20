#include <stdio.h>

int main()
{
    int i, j;
    int rows = 9;
    int mid = rows / 2 + 1;
    for (i = 1; i <= mid; i++) {
        for (j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = mid - 1; i >= 1; i--) {
        for (j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}