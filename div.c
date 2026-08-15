#include <stdio.h>
int main()
{
    int num;

    printf("enter the number here: ");
    scanf("%d",&num);

    if(num % 5 == 0 && num % 11 == 0){
        printf("number is divisible by both 5 and 11");
    }

    else if(num % 5 == 0){
        printf("number is dividible by 5");
    }

    else if (num % 11 == 0){
        printf("number is divisible by 11");
    }

    else{
        printf("not divisible by both 5 and 11");
    }
    return 0;
    
}