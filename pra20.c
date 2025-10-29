#include<stdio.h>

void main()
{
    int id[100],n,i;

    printf("enter number of student:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("student %d",i);
        scanf("%d ",&id[i]);
    }
}
