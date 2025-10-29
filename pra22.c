#include <stdio.h>

void main()
{
    char s[5][10];
    int rs,r,c,i,j;

    for (i=1;i<=5;i++)
    {
        for (j=1;j<=10;j++)
        {
                s[i][j]='0';
        }
    }

    printf("Enter the number of reserved seats: ");
    scanf("%d", &rs);

    for (i=1;i<=rs;i++)
    {
        printf("Enter row and seat number for reserved seat %d: ",i);
        scanf("%d %d",&r,&c);

        if (r>=1 && r<=5 && c>=1 && c<=10)
        {
            s[r][c]='X';
        }
        else
        {
            printf("Invalid \n");
        }
    }

    printf("\n Seating Chart:\n");

    for (i=1;i<=5;i++)
    {
        printf("Row %d: ",i);

        for (j=1;j<=10;j++)
        {
            printf("%c ",s[i][j]);
        }
        printf("\n");
    }
}
