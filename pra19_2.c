#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (i = 1; i <= 9; i++)
    {
        if (i == 2 || i == 8)
        {
            printf("%d ", i);
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");

    for (i = 1; i <= 9; i++)
    {
        if (i == 3 || i == 7)
        {
                printf("%d ", i);
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");

    for (i = 1; i <= 9; i++)
    {
        if (i == 4 || i == 6)
        {
            printf("%d ", i);
        }
        else
        {
            printf("  ");
        }

    }
    printf("\n");

    for (i = 1; i <= 9; i++)
    {
        if (i == 5)
        {
            printf("%d ", i);
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
}
