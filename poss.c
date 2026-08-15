#include <stdio.h>
int main()
{
    int num;

    printf("enter the number here: ");
    scanf("%d",&num);

    if(num >= 0){
        printf("the number is possitive");
    }
    else {
        printf("the number is negative");
    }
    return 0;
}
