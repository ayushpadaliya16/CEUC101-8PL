/*aim:to make automatic tank refil system
editor:ayush padaliya
last updated date:4/08/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int l;
	clrscr();

	for(l=10;l<=100;l=l+10)
	{
		printf("\n cuurent water lavel: %d litre",l);
	}
	printf("\n tank is full");
	getch();
}