#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    float sales, commission;
    char sale_type;

    printf("Enter type of sale Local or out\n");
    scanf("%c",&sale_type);

    printf("Enter the sales amount\n");
    scanf("%f",&sales);


    if (sale_type=='L'){
      
        if( sales<10000){
            commission=0.0;
        }else{
            commission=sales*0.06;
        }
    }
    else if(sale_type=='O'){
        if(sales<10000){
            commission=sales*0.06;
        }else{
            if(sales>=10000 && sales<=25000){
                commission=sales*0.10;
            }else{
            commission=sales*0.15;
            }
        }
    }else{
        printf("Invalid sale");
    }
    printf("The commission amount is :%.2f\n",commission);
}