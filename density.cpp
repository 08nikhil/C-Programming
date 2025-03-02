#include<stdio.h>
#include<conio.h>

int main()
{
    int len,wid,hei,volume;
    float density=2.7,mass;
    printf("Enter length,bridth and height of aluminium block \n");
    scanf("%d%d%d",&len,&wid,&hei);
    volume=len*wid*hei;
    printf("volume =%d",volume);
    mass=density*volume;
    printf("mass value  %.2f",mass);
}