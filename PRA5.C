/*aim:To find the litracy rate and ilitracy rate
editor:ayush padaliya
last updated date:25/07/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	long float perw,perm,perlo,perlm,perlw;
	long int pob,nm,nw,olp,nlm,nlw,nilm,nilw;

	clrscr();

	pob=1441981744;
	perw=48.4;
	perm=100-48.4;
	nm=(pob*perm)/100;
	nw=(pob*perw)/100;
	perlo=85.95;
	olp=(pob*perlo)/100;
	perlm=80.95;
	perlw=62.85;
	nlm=(nm*perlm)/100;
	nlw=(nw*perlw)/100;
	nilm=nm-nlm;
	nilw=nw-nlw;

	printf("\n total population of bharat is %ld",pob);
	printf("\n total percentag of man is %lf",perm);
	printf("\n total percentag of women is %lf",perw);
	printf("\n total number of man in bharat is %ld",nm);
	printf("\n total number of women in bharat is %ld",nw);
	printf("\n over literacy rates in bharat is %lf",perlo);
	printf("\n total number of literacy in bharat is %ld",olp);
	printf("\n total percentag of literancy of man is %lf",perlm);
	printf("\n total percentage of literancyof women is %lf",perlw);
	printf("\n total number of literancy man is %ld",nlm);
	printf("\n total number of literancy women is %ld",nlw);
	printf("\n total number of ilterancy man is %ld",nilm);
	printf("\n total number of ilterancy women is %ld",nilw);

	getch();
}






