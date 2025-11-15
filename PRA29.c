#include<stdio.h>

struct teamdetail
{
    char tname[50];
    char stype[25];

struct coach_detail
{
    char name[50];
    int age,year;
}s2[10];

}s1[10];
void main()
{

    int n,i;

    printf("Enter no of Teams:");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("\nEnter %d team details",i+1);
        printf("\nEnter Team name: ");
        scanf(" %[^\n]",s1[i].tname);
        printf("\nEnter sport name: ");
        scanf(" %[^\n]",s1[i].stype);

        printf("\nEnter coach details");
        printf("\nEnter coach name: ");
        scanf(" %[^\n]",s1[i].s2[i].name);
        printf("\nEnter coach age: ");
        scanf("%d",&s1[i].s2[i].age);
        printf("\nEnter coach exprience: ");
        scanf("%d",&s1[i].s2[i].year);
    }

    printf("-----TEAM DETAILS-----");
    printf("\nNo. Team Name\t\tSport\t\t\tCoach\t\tAge\tExprience");

    for(i=0;i<n;i++)
    {
        printf("\n%-3d %-10s %20s %20s %11d %11d",i+1,s1[i].tname,s1[i].stype,s1[i].s2[i].name,s1[i].s2[i].age,s1[i].s2[i].year);



    }
}
