#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    int row = 1;

    do {
        int i = 1;

        while (i <= row) {
            printf("%c", 'A' + i - 1); 
            i++;
        }

        int j = row - 1;
        
        while (j >= 1) {
            printf("%c", 'A' + j - 1); 
            j--;
        }

        printf("\n");  
        row++;  

    } while (row <= 4); 

}