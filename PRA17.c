/*aim:To make an app to track a runner's distance during a marathon.
editor:Ayush padaliya.
last updated date:6/09/2025
*/

#include<stdio.h>
#include<unistd.h>

void main()
{
    float i;

    for(i=1;i<=20;i++)
    {
        printf("Minute %f:Distance covered = %f Km\n",i,i/2);
        sleep(1);
    }
}
