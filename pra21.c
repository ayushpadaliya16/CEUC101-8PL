#include<stdio.h>

void main()
{
    int n[5],i,np=0,nn=0,no=0,ne=0;

    for(i=1;i<=5;i++)
    {
        printf("number %d  ",i);
        scanf("%d",&n[i]);
    }

    for(i=1;i<=5;i++)
    {
        if(n[i]>0)
        {
            np++;
        }
        else
        {
            nn++;
        }
    }
    printf("Total number of positive numbers: %d \n",np);
    printf("Total number of negative numbers: %d \n",nn);

    for(i=1;i<=5;i++)
    {
        if(n[i]%2==0)
        {
            ne++;
        }
        else
        {
            no++;
        }
    }
    printf("Total number of even numbers: %d \n",ne);
    printf("Total number of odd numbers: %d \n",no);
}
