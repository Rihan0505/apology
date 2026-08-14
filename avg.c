#include <stdio.h>
int main()
{
    float a,b,c,average;

    printf("enter the value of a here: ");
    scanf("%f",&a);

    printf("enter the value of b here: ");
    scanf("%f",&b);

    printf("enter the value of c here: ");
    scanf("%f",&c);

    average = (a+b+c)/3;

    printf("the average of a,b,c is: %f\n",average);
    return 0;
}