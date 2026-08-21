#include <stdio.h>
int main()
{
    int option;

    printf("enter your option here 1 to 4: ");
    scanf("%d",&option);

    switch(option){

        case 1:
        printf(" 1 - check balance\n balance = 50000");
        break;

        case 2:
        printf("2 - deposit selected");
        break;

        case 3:
        printf("3 - withdrow selected");
        break;

        case 4:
        printf(" 4 - exit");
        break;

        default:
        printf("invalid option");
    }

    return 0;
} 