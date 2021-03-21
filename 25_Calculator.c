#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");//It will print the operater to be entered by user.
    scanf("%c", &operator);//It will scan the operater entered by user.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b);//It will scan the numbers entered by user.
    switch(operator)//Switch case is used to perfom the calculation case that is scanned (in line 6) based on user input.
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b);//Add Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b);//Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b);//Product Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b);//Goes into Function
            break;
    printf("Error encountered by the input values");//Default
    }
    return 0;
}
