//Write a C program to interchange values of two variables using third variable

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    a=10;
    b=20;
    c=0;
    printf("Value of a %d",a);
    
    c=a;
    a=b;
    b=c;
    printf("\n a: %d ,b: %d",a,b);
    return 0;
}
