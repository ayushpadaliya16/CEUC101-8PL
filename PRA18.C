/*aim: to make table
editor: Ayush padaliya
last updated date:1/09/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,nr,nc;
	clrscr();

	printf("enter the value of rows:");
	scanf("%d",&nr);
	printf("enter the value of coloum:");
	scanf("%d",&nc);

	for(r=1;r<=nr;r++)
	{
		for(c=1;c<=nc;c++)
		{
			printf("%d*%d=%d",r,c,r*c);
			printf("\n");
		}
	}

	getch();
}
