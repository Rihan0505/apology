#include <stdio.h>
int main(){

    int a,b;

    printf("enter the value of a here: ");
    scanf("%d",&a);

    printf("enter the value of b here: ");
    scanf("%d",&b);

    if(a > b){
        printf("the a is greater thn b");
    }

    else{
        printf("b is greater th a");
    }
    return 0;
}