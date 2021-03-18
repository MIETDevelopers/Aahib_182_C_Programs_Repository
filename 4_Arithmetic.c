#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); //Print operations written by user.
    scanf("%c", &operator); //It will scan the operater entered by user.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //Scan users input.
    switch(operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Sum Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtract Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //product Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Goes into Function
            break;
    printf("Error encountered by the input values");
    }
    return 0;
