#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int area(int a ){
    int sqarea=a*a;
    return sqarea;
}

int area(int b,int c){
    int recarea=b*c;
    return recarea;
}

int main()
{
    int d=area(10,20);
    printf("area of square =%d",area(10));
    printf("area of square =%d",area(20));
    printf("area of square =%d",area(30));
    printf("rectangle area=%d",d);


}

