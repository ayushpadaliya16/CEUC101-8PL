#include<stdio.h>

void main()
{
    int n,i,j;
    float *p,*q,*t;

    printf("Enter the number of item: ");
    scanf("%d",&n);

    p=(float *)calloc(n,sizeof(float));
    t=p;

    for(i=1;i<=n;i++,p++)
    {
        printf("\n enter the price of %d",i);
        scanf("%f",p);
    }
    p=t;

    for(i=1;i<n;i++,p++)
    {
        for(j=i+1,q=p+1;j<=n;j++,q++)
        {
            if(*p>*q)
            {
                *p=*p+*q;
                *q=*p-*q;
                *p=*p-*q;
            }
        }
    }

    for(i=1;i<=n;i++,t++)
    {
        printf("\n %d value of price is %f",i,*t);

    }
}
