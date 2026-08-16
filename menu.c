#include <stdio.h>
int main()
{
    int menu;

    printf("enetr the menu code here from 1 to 4: ");
    scanf("%d",&menu);

    switch(menu){

        case 1:
        printf("Pizza");
        break;

        case 2:
        printf("Burger");
        break;

        case 3:
        printf("sandwich");
        break;

        case 4:
        printf("pasta");
        break;

        default:
        printf("not available");
    }
    return 0;
}