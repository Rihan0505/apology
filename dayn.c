#include <stdio.h>
int main()
{
    int num;

    printf("enter the num from 1 to 7 here: ");
    scanf("%d",&num);

    switch(num){

        case 1:
        printf(" Monday");
        break;

        case 2:
        printf(" tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("sunday");
        break;

        default:
        printf(" Invalid number");
    }
    return 0;
}