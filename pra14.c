/*aim:The National Bank of Bharat wants to simulate an ATM machine.
name:ayush padaliya
last updated date:20/08/2025
*/

#include<stdio.h>
void main()

{
    int n,wm,balance=5000,a;
    char choice;

    x:printf("\n1 for check for balance \n2 for withdraw maoney \n3 for exist\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            printf("\nyour avlaible balance is %d",balance);
            break;

        case 2:
            printf("\nenter amount which you wan to withdraw");
            scanf("%d",&wm);

                if(wm<balance)
                {
                    a=balance-wm;
                    printf("\nyour remaining balance is: %d",a);
                    balance=a;
                }
                else
                {
                    printf("\ninsufficinet balance");
                }
                break;
        case 3:
            break;
    }
    printf("\ndo you want to make another transaction ? \n1 for yes \n2 for no");
    scanf("%d",&choice);

    if(choice==1)
    {
            goto x;
    }
    else
    {
        printf("\nthanks for using the ATM");
    }
}
