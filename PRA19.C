/*aim: To make Patterns
editor: Ayush padaliya
last updated date:25/08/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	clrscr();

	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c%2==0);
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n"):
	}
	getch();
}