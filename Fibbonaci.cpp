#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

   for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);  
            continue;
        }
        if (i == 2) {
            printf("%d ", second); 
            continue;
        }
        
        next = first + second;  
        printf("%d ", next);     
        first = second;         
        second = next;         
    }

    printf("\n");  
}