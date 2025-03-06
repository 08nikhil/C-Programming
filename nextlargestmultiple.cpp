#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
   int a,b,value;
   printf("Enter two number\n");
   scanf("%d%d",&a,&b);
   
   if (a % b == 0){
    printf("the next multiple of %d is %d\n",a,b);
   }else{

     value= (a / b +1)*b;
     printf("%d is the next value",value);

   }
   
   
}