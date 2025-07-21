/*aim: study various datatype and their size in bytes
editor:ayush padaliya
last updated date:21/07/2025
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	char c;
	int i;
	double d;
	float f;

	clrscr();
	printf("\n char size is: %d",sizeof(c));
	printf("\n int size is: %d",sizeof(i));
	printf("\n double size is: %d",sizeof(d));
	printf("\n float size is: %d",sizeof(f));

	getch();
}