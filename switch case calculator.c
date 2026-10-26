/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char op;
    double a,b;
    
    printf("Enter an operator(+, -, *, /): ");
    scanf("%c", &op);
    
    printf("Enter two numbers: ");
    scanf("%lf%lf", &a, &b);
    
    switch(op)
    {
        case '+':
        printf("%.1lf + %.1lf = %.1lf", a, b, a+b);
        break;
        
        case '-':
        printf("%.1lf - %.1lf = %.1lf", a, b, a-b);
        break;

        case '*':
        printf("%.1lf * %.1lf = %.1lf", a, b, a*b);
        break;
        
        case '/':
        printf("%.1lf / %.1lf = %.1lf", a, b, a/b);
        break;
        
        default:
        printf("It's a beautiful day and a beautiful time to be alive");
        break;
        
    }
        return 0;

}