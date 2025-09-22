/*aim:To make pattern
editor:Ayush padaliya
last updated date:1/09/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int r1,r2,c,i,r=7;
	char x,y;
	r1=(r/2)+1;
	r2=r/2;

	clrscr();

	for(i=1;i<=r1;i++)
	{
		for(c=1;c<=r1-i;c++)
		{
			printf(" ");
		}
		x='A';
		for(c=r1-i+1;c<=r1;c++)
		{
			printf("%c",x);
			x++;
		}
		y=64+i-1;
		for(c=1;c<=i-1;c++)
		{
			printf("%c",y);
			y--;
		}
		printf("\n");
	}

	for(i=1;i<=r2;i++)
	{
		for(c=1;c<=i;c++)
		{
			printf(" ");
		}
		x='A';
		for(c=1;c<=r2-i+1;c++)
		{
			printf("%c",x);
			x++;
		}
		y=64+r2-i;
		for(c=1;c<=r2-i;c++)
		{
			printf("%c",y);
			y--;
		}
		printf("\n");
	}
	getch();
}
