#include <stdio.h>
int main()
{
    char operation;

    printf("enetr the operation here['+','-','*','/']: ");
    scanf("%c",&operation);

    double num1,num2;

    printf("enter the num1 here: ");
    scanf("%if",&num1);

    printf("enter the num2 here: ");
    scanf("%if",&num2);

    double result;

    switch(operation){

    case '+':
    result = num1 + num2;
    break;

    case '-':
    result = num1 - num2;
    break;

    case '*':
    result = num1 * num2;
    break;

    case '/':
    result = num1 / num2;
    break;
    }

    printf("after calculation the answe is: %if",result);
    return 0;
}