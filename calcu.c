#include <stdio.h>
int main()
{
    int num1,num2;
    char operation;


    printf("enter the num1 here: ");
    scanf("%d",&num1);

    printf("enter the operation here: ");
    scanf(" %c",&operation);

    printf("enter the num2 here: ");
    scanf("%d",&num2);


    if (operation == '+'){
        printf("%d", num1 + num2);
    }

    else if(operation == '-'){
        printf("%d", num1 - num2);
    }

    else if(operation == '*'){
        printf("%d",num1 * num2);
    }

    else if(operation == '/'){
        printf("%d",num1 / num2);
    }
    else{
        printf("invald operation");
    }
    return 0;
}