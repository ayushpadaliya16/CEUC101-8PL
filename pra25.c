#include <stdio.h>
#include <string.h>

char books[4][30]={
    "C Programming",
    "Data Structures",
    "Operating Systems",
    "Computer Networks"
};

int totalBooks=4;

void displayBooks()
{
    int i;

    printf("Available Books:\n");

    for (i=0;i<totalBooks;i++)
    {
        if (strlen(books[i])>0)
        {
            printf("%d. %s\n",i+1,books[i]);
        }
    }
}

int getTotalBooks()
{
    int count=0,i;
    for (i=0;i<4;i++)
    {
        if(strlen(books[i])>0)
        {
            count++;
        }
    }
    return count;
}

void borrowBook(char* bookName)
{
    int found=0,i;
    for(i=0;i<4;i++)
    {
        if(strcmp(books[i],bookName)==0)
        {
            printf("You borrowed: %s\n", books[i]);
            strcpy(books[i], "");
            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("Book not found or already borrowed.\n");
    }
}

float calculateFine(int daysLate)
{
    float finePerDay = 2.0;
    return finePerDay * daysLate;
}

void main()
{
    int choice, days,a;
    char bookName[30];

    q: printf("Library Menu:\n");
    printf("1. Display books\n");
    printf("2. Total number of books\n");
    printf("3. Borrow a book\n");
    printf("4. Calculate fine\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            displayBooks();
            break;

        case 2:
            printf("Total books: %d\n", getTotalBooks());
            break;

        case 3:
            printf("Enter book name to borrow: ");
            scanf(" %[^\n]", bookName);  // Read full line including spaces
            borrowBook(bookName);
            break;

        case 4:
            printf("Enter number of late days: ");
            scanf("%d", &days);
            printf("Fine: ₹%.2f\n", calculateFine(days));
            break;

        default:
            printf("Invalid choice.\n");
    }

    printf("press 1 for continue 0 for exit: ");
    scanf("%d",&a);

    if(a==1)
    {
        goto q;
    }

}

