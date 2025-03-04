#include<stdio.h>
#include<conio.h>

int main()
{
    float water,serviceCharge,watercost,litre,sewage1,sewagecost,totalbill;
    printf("Enter water consumed in litres \n");
    scanf("%f",&water);
    litre=2.05/100;
    watercost=water*litre;
    sewage1=0.5/100;
    printf("hi");
    sewagecost=water*sewage1;

    serviceCharge=(sewagecost+watercost)*0.02;
    totalbill=serviceCharge+sewagecost+watercost;
    printf("watercost =%.2f\n sewagecost=%.2f\n servicecharge=%.2f\n total bill =%.2f \n",watercost,sewagecost,serviceCharge,totalbill);


}