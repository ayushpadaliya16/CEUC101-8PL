#include <stdio.h>
int main()
{
  int num1,num2,sum,sub,multy,div;
  printf("enter Frist num1:");
  scanf("%d",&num1);
  printf("enter second num2:");
  scanf("%d",&num2);
  sum=num1+num2;
  printf("answer addtion: %d",sum);
  printf("\n");
  sub=num1-num2;
   printf("answer subtraction: %d",sub);
   printf("\n");
   multy=num1*num2;
   printf("answer multiple: %d \n",multy);
  div=num1/num2;
   printf("answer division: %d",div);
   printf("\n");
   
  return 0;
 }