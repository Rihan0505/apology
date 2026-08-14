#include <stdio.h>
int main()
{
    int length,breadth,area;

    printf("enter the value of length here: ");
    scanf("%d",&length);

    printf("enter the value of breadth here: ");
    scanf("%d",&breadth);

    area = length * breadth;

    printf("the area of rectangle is: %d",area);

    return 0;
}