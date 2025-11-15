#include<stdio.h>

void fibonacci();

void main()
{

    fibonacci();
}
void fibonacci()
{
    int i,x,n,y=0,z=1;

    printf("Enter no of months:");
    scanf("%d",&n);
    for(i=0.5;i<=n;i++)
    {

        x=y+z;
        y=z;
        z=x;
        printf("Month %d :savings: %d\n",i,x);

    }



}
