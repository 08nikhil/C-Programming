#include<stdio.h>
#include<conio.h>
#include<ctype.h>

// Q-The turnover of a company is Rs. 1.6 Million, if the turnover increases every year ata constant rate of 25%.Write a program to find the number of years in which the company will exceed the target of Rs. 20 Millions.
int main()
{
    
        float turnover = 1.6;  
        float target = 20.0;   
        float growth_rate = 0.25; 
        int years = 0; 

        do {
            turnover += turnover * growth_rate; 
            years++; 
        } while (turnover <= target); 
        printf("It will take %d years for the turnover to exceed Rs. 20 million.\n", years);
}