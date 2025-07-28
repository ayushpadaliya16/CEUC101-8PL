/*aim:to give discount to the coustmor on bill
editor:ayush padaliya
lase updated date:28/07/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float amount;
	float discount;
	clrscr();
	printf("eneter your total bill:");
	scanf("%f",&amount);
	if(amount<1000)
	{
		printf("your get 0 discount %f:",amount);
	}
	else if(amount<=5000)
	{
		printf("you get 10 discount %f:",amount-amount*10/100);
	}
	else
	{
		printf("you get 20 discount %f:",amount-amount*20/100);
	}
	getch();
}