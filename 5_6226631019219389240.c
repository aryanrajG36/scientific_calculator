#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1,num2,result;
    printf("Scientific Calculator\n");
    while (operator != 'e'){
    printf("Enter an operator (+, -, *, /, ^, s for sin, c for cos, t for tan, l for log): ");
    scanf(" %c", &operator);
    
    switch (operator) {
        case '+':
            printf("Enter two numbers separated by a space: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %lf \n", result);
            break;
        case '-':
            printf("Enter two numbers separated by a space: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %lf \n", result);
            break;
        case '*':
            printf("Enter two numbers separated by a space: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %lf \n", result);
            break;
        case '/':
            printf("Enter two numbers separated by a space: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 / num2;
            printf("Result: %lf \n", result);
            break;
        case '^':
            printf("Enter base: ");
            scanf("%lf", &num1);
            printf("Enter exponent: ");
            scanf("%lf", &num2);
            result = pow(num1, num2);
            printf("Result: %lf \n",result);
            break;
        case 's':
            printf("Enter the value in radians: ");
            scanf("%lf", &num1);
            result = sin(num1);
            printf("Result: %lf \n", result);
            break;
        case 'c':
            printf("Enter the argument in radians: ");
            scanf("%lf", &num1);
            result = cos(num1);
            printf("Result: %lf \n", result);
            break;
        case 't':
            printf("Enter the argument in radians: ");
            scanf("%lf", &num1);
            result = tan(num1);
            printf("Result: %lf \n", result);
            break;
        case 'l':
            printf("Enter the argument: ");
            scanf("%lf", &num1);
            result = log10(num1);
            printf("Result: %lf \n", result);
            break;
    }
}   printf("Thank you");
    return 0;
}


