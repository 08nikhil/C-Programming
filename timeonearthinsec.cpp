#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
   unsigned int age,age_in_days,seconds;
   printf("Enter your age\n");
   scanf("%d",&age);

   age_in_days=age*365;
   
   seconds=86400*age_in_days;
   printf("age in days=%d\n",age_in_days);
   printf("seconds=%d",seconds);


   

}