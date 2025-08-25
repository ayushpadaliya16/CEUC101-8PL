/* aim: to make time wacth using c program
editor:Ayush padaliya
last updated date:22/08/2025
*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int time,n;
	clrscr();

	printf("enter the number of second for time: \n");
	scanf("%d",&time);

	for(n=time;n>=0;n--)
	{
		clrscr();
		printf("\n %d",n);
		delay(1000);
	}
	getch();
}