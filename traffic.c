#include <stdio.h>
int main(){

    int light;

    printf("enter the num of light here: ");
    scanf("%d",&light);

    switch(light){

        case 1:
        printf(" red - stop");
        break;

        case 2:
        printf("yellow - goo slowly");
        break;

        case 3:
        printf("green - you may goo");
        break;

        default:
        printf("invalid");
    }

    return 0;
}