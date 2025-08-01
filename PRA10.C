/*aim:to make bill of restrorant
editor:ayush padaiya
last updated date:1/08/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int bill;
	char item,s;
	clrscr();

	bill=0;
	printf("b : burger \np : pizza \nf : french fries \na : pasta \ns : sandwich");

	x:	printf("\nchose your item:");
	flushall();
	scanf("%c",&item);
	switch(item)
	{
		case 'b':
		bill=bill+150;
		break;

		case 'p':
		bill=bill+200;
		break;

		case 'f':
		bill=bill+80;
		break;

		case 'a':
		bill=bill+100;
		break;

		case 's':
		bill=bill+120;
		break;

		default:
		printf("this item not in menu");
		break;
	}
	printf("\n if you want give order press n \n if you want exist press e:");
	flushall();
	scanf("%c",&s);

	if(s=='n')
	{
		goto x;
	}
	else
	{
		printf("your final bill is:%d",bill);
	}
	getch();
}
