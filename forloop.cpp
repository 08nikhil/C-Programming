#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i); 
        }
        printf("\n");  
    }
}