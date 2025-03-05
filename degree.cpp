#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a,x,y,eqn;
    printf("Enter the value of theta\n");
    scanf("%f",&a);
    printf("Enter Value of x \n");
    scanf("%f",&x);

    printf("Enter Value of y \n");
    scanf("%f",&y);

    eqn= x*cos(a) + y*sin(a);

    printf("value=%f",eqn);


    
}