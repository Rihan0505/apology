#include <stdio.h>
int main()
{
    int a,b;

    printf("enter the value of a here: ");
    scanf("%d",&a);

    printf("enter the value of b here: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swapping \n");

    printf("a is: %d\n",a);
    printf("b is: %d\n",b);

    return 0;


}