#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
   char a;
   printf("Enter lowercase letters \n");
   scanf("%c",&a);

   a=toupper(a);

   printf("value=%c",a);
}