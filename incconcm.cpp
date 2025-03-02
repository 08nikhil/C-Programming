#include<stdio.h>
#include<conio.h>

int main()
{
    
    float inches,centi;
    printf("Enter Value in inches\n");
    scanf("%f",&inches);
    centi=inches*2.54;
    printf("Value in centimeter %.2f",centi);

}