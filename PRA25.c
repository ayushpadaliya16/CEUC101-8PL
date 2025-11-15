#include <stdio.h>
#include <string.h>

void displayBooks();
int getTotalBooks();
void borrowBook(char bookName);
float calculateFine(int daysLate);

void main()
{
    int choice, total, days,n;
    char book;

    q: printf("Library Menu:\n");
    printf("1. Display books\n");
    printf("2. Total number of books\n");
    printf("3. Borrow a book\n");
    printf("4. Calculate fine\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            displayBooks();
            break;

        case 2:
            total = getTotalBooks();
            printf("Total books: %d\n", total);
            break;

        case 3:
            printf("Enter book name (a/b/c/d): ");
            scanf(" %c", &book);  // space before %c to consume newline
            borrowBook(book);
            break;

        case 4:
            printf("Enter number of late days: ");
            scanf("%d", &days);
            printf("Fine: ₹%.2f\n", calculateFine(days));
            break;

        default:
            printf("Invalid choice.\n");
    }

    printf("press 1 for contiune press 0 for exit: ");
    scanf("%d",&n);

    if(n==1)
    {
        goto q;
    }
}

void displayBooks()
{
    int i;
    char books[4] = {'a', 'b', 'c', 'd'};
    printf("Available books:\n");

    for (i=0;i<4;i++)
    {
        printf("%c\n", books[i]);
    }
}

int getTotalBooks()
{
    return 4;
}

void borrowBook(char bookName)
{
    char books[4] = {'a', 'b', 'c', 'd'};
    int found=0,i;

    for (i=0;i<4;i++)
    {
        if (books[i]==bookName)
        {
            printf("You borrowed book: %c\n", bookName);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Book not found.\n");
    }
}

float calculateFine(int daysLate)
{
    float finePerDay = 2.0;
    return finePerDay * daysLate;
}
