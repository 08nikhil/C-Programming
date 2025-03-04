#include<stdio.h>
#include<conio.h>

int main()
{
    float t,d=1.496e11,s=300000;
    d=d/1000;
    t=d/s;
    t=t/60;
    printf("value =%.2f minutes",t);


}