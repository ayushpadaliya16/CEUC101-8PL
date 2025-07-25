/*aim:to find fahrenheit temprature use of celsius temprature
editor:padaliya ayush
last updated date:25/07/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float c,f;
	clrscr();

	printf("enter the value of celsius temprature is:");
	scanf("%f",&c);

	f=(c*9)/5+32;

	printf("value of fahrenheit temprature is: %f",f);
	getch();
}