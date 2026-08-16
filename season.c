#include <stdio.h>
int main()
{
    int season;

    printf("entr the season number here 1 to 4: ");
    scanf("%d",&season);

    switch(season){

        case 1:
        printf("1 - summer");
        break;

        case 2:
        printf("2 - winter");
        break;

        case 3:
        printf("3 - spring");
        break;

        case 4:
        printf("4 - autumn");
        break;
        
        default:
        printf("invalid");
    }

    return 0;
}