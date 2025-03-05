#include<stdio.h>
#include<conio.h>

int main()
{
    float a,floatValue;
    int inumber;
    printf("Enter a floating number \n");
    scanf("%f",&a);

    inumber=(int)a;

    floatValue=a - inumber;

    printf("integer=%d \n",inumber);
    printf("fraction=%.3f \n",floatValue);



    
}