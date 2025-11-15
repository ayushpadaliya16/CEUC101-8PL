#include<stdio.h>
#include<stdlib.h>

union booktitle
{
    char title[50];

};
union bookauthors
{
    char author[50];
};
union bookprice
{
    float price;
};

void main()
{
    union booktitle alltitle[5];
    union bookauthors allauthors[5];
    union bookprice allprice[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nPlease enter the title of the book:");
        scanf("%s",alltitle[i].title);

        printf("%s",alltitle[i].title);

        printf("\nPlease enter the author of the book:");
        scanf("%s",allauthors[i].author);

        printf("%s",allauthors[i].author);

        printf("\nEnter the price of the book:");
        scanf("%f",&allprice[i].price);

        printf("\n %f",allprice[i].price);
    }

}
