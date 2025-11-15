#include<stdio.h>
#include<math.h>

int valid(float a,float b,float c);
float triangle(float a,float b,float c);

void main()
{
    float a,b,c;
    printf("Please enter the three sides of the triangle\n");
    printf("enter side 1:");
    scanf("%f",&a);
    printf("enter side 2:");
    scanf("%f",&b);
    printf("enter side 3:");
    scanf("%f",&c);

    triangle(a,b,c);
}

int valid(float a,float b,float c)
{
    if(a<0||b<0||c<0)
    {
        return 0;
    }
    if(a<b+c&&b<a+c&&c<a+b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


float triangle(float a,float b,float c)
{

    if(valid(a,b,c)==1)
    {
        printf("triangle is valid\n");
        float s,area;

         s=(a+b+c)/2.0;
         area= sqrt(s*(s-a)*(s-b)*(s-c));


        printf("the area is %f:",area);
    }
    else
    {
        printf("the triangle is not valid");
    }
}
