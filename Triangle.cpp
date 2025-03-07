#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    float a,b,c;
    printf("Enter the three sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);

    if (a<=0 && b<=0 && c<=0){
        printf("enter valid triangle\n");

    }

    if (a+b<c && a+c<b && b+c<a){
        printf("the side do not form triangle\n");

    }else{
        if (a==b && b==c){
            printf("triangle is equilateral\n");
        }else if (a==b || b==c || a==c){
            printf("triangle is isosceles\n");

        }else if (a*a + b *b ==c*c || a*a + c*c ==b*b || b*b + c*c == a*a)
            printf("traingle is right angle triangle\n");
        else{
            printf("triangle is scalene\n");
        }
        }
}
