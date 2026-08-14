#include <stdio.h>
int main()
{
    int simpleinterest,principle,rate,time;

    printf("enter the value of principal: ");
    scanf("%d",&principle);

    printf("enter the value of rate: ");
    scanf("%d",&rate);

    printf("enter the value of time: ");
    scanf("%d",&time);

    simpleinterest = (principle  * rate * time) / 100;

    printf("the simpleinterest is: %d\n",simpleinterest);

    return 0;

}
