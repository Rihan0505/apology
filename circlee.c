#include <stdio.h>
int main()
{
    int radius,area;

    printf("enter the radius of circle here: ");
    scanf("%d",&radius);

    area= 3.14 * radius *radius;

    printf("the radius of circle is: %d",area);
    return 0;
}