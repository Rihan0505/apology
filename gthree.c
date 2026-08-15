#include <stdio.h>
int main()
{
    int a,b,c;

    printf("enter the value of a here: ");
    scanf("%d",&a);

    printf("enter the value of b here: ");
    scanf("%d",&b);

    printf("enter the value of c here: ");
    scanf("%d",&c);

    if( a >= b && a >= c){
        printf("a is greater thn b and c ");
    }

    else if(b >= a && b >= c){
        printf("b is greater thn a and c");
    }

    else{
        printf("c is greater thn a and b");
    }
    return 0;
}