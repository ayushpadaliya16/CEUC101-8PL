/*aim: to take value of hight and wight form user and give them BMI.
editor: ayush padaliya
last updated date:21/07/2025
*/
#include<stdio.h>
#include<conio.h>

void main()
{
float w,h,bmi;
clrscr();
printf("enter the value of hight in meter:");
scanf("%f",&h);
printf("enter the value of wight in kilogram:");
scanf("%f",&w);
bmi=w/(h*h);
printf("your bmi value is: %f",bmi);
getch();
}



