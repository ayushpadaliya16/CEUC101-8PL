/*aim: To make Revers printing.
editor:Ayush Padaliya.
Last updated date:20/11/2025.
*/

#include<stdio.h>

void main()
{
    FILE *fp,*t;
    char ch;
    fp=fopen("data.txt","r");

    if(fp==NULL)
    {
        printf("Cannot open file");
    }
    else
    {
        t=fp;
        fseek(fp,-1,SEEK_END);

        while(t!=fp)
        {
            ch=fgetc(fp);
            printf("%c",ch);

            fseek(fp,-2,SEEK_CUR);
        }
    }
    fclose(fp);
}
