/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void add(int x)
{
    if (x%2 == 0)
        printf("The number is even\n");
        
    else
        printf("The number is odd\n");
}
int main()
{
    int a, b;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    add(a);
    
    getchar();
    
    printf("\nEnter a key to execute the second command\n");
    
    getchar();
    
    printf("Enter another number: ");
    scanf("%d", &b);
    
    add(b);
    
    
}