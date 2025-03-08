#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{

    int num, total = 0, count = 0;
    float average;
    
     do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
    
            if (num != 0) {
                total += num; 
                count++;       
            }
    
        } while (num != 0);  
    
       
        if (count > 0) {
            average = (float)total / count;  
            printf("Total: %d\n", total);
            printf("Average: %.2f\n", average);
        } else {
            printf("No numbers were entered.\n");
        }
}