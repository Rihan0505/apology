#include <stdio.h>
int main()
{
    int month;

    printf("enter the num between 1 to 12 here: ");
    scanf("%d",&month);

    switch(month){

        case 1:
        printf("Jan");
        break;

        case 2:
        printf("feb");
        break;

        case 3:
        printf("march");
        break;

        case 4:
        printf("apr");
        break;

        case 5:
        printf("may");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;

        case 8:
        printf("aug");
        break;

        case 9:
        printf("sept");
        break;

        case 10:
        printf("oct");
        break;

        case 11:
        printf("nov");
        break;

        case 12:
        printf("dec");
        break;

        default: 
        printf("invalid number");
    }
    return 0;
}