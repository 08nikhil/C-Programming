#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    int a,b,c,hours,min,totalsec;
    printf("Enter hour\n");
    scanf("%d",&a);
    printf("Enter minutes\n");
    scanf("%d",&b);
    printf("Enter seconds\n");
    scanf("%d",&c);

    hours=a*3600;
    min=b*60;

    totalsec=hours+min+c;

    printf("total seconds=%d",totalsec);


}