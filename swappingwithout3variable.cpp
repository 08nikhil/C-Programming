#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a=%d and b=%d",a,b);
}