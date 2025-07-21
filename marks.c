#include<stdio.h>

int main()
{
int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
     if(marks<35&&marks>=0)
    {
    printf("you are fail \n");
    }
    else if(marks>=35&&marks<50)
    {
    printf("you get d grade \n");
    }
    else if(marks>=50&&marks<70)
    {
    printf("you get c grade");
    }
    else if(marks>=70&&marks<90)
    {
    printf("you get b grade");
    }
    else if(marks>=90&&marks<100)
    {
    printf("you get a grade ");
    }
    else if(marks<0)
    {
    printf("invalid format");
    }
return 0;
}