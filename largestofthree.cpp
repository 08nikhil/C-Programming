#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter first numbr\n");
    scanf("%d",&a);
    printf("Enter second numbr\n");
    scanf("%d",&b);
    printf("Enter third numbr\n");
    scanf("%d",&c);

    if (a>=b && a>=c)
        printf("a=%d is the largest \n",a);   
    else if (b>=a && b>=c)
        printf("b=%d is the largest \n",b);
    else 
    printf("c=%d is the largest \n",c);
}