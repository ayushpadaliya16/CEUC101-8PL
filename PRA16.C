/*aim: make matchstick game between user and computer.
editor:Ayush padaliya.
last updated date:22/08/2025.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int m=21,nu,nc;
	clrscr();

	printf("total number of matchstick is: %d\n",m);
	printf("your choice is 1, 2, 3, 4\n");

	while(m>1)
	{
		if(nu>0 || nu<=4)
		{
			printf("First turn is yours\n");
			printf("enter your choice\n");
			scanf("%d",&nu);

			nc=5-nu;
			printf("Computer chose: %d\n",nc);
			m=m-5;
			printf("Remaining matchstick is: %d\n",m);
		}
		else
		{
			printf("invaild number");
		}

	}
	printf("Computer is Win");

	getch();
}
