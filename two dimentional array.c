#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, d, e, f, g, h, i;
    printf("How many rows?  :");
    scanf("%d", &a);
    printf("How many columns? :");
    scanf("%d", &b);
    int x[a][b];
    for (c = 1; c <= a; c++)
    {
        for (d = 1; d <= b; d++)
        {
            printf("Enter number for [%d][%d] :", c, d);
            scanf("%d", &x[c][d]);
        }
    }
    for (c = 1; c <= a; c++)
    {
        for (d = 1; d <= b; d++)
        {
            printf("%d " , x[c][d]);
        }
        printf("\n");
    }
    return 0;
}