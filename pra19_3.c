/*aim: To make Patterns
editor: Ayush padaliya
last updated date:25/08/2025
*/

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf("  ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        for (j = 2; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (i = 2; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf("  ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        for (j = 2; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

