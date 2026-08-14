#include <stdio.h>
int main()
{ 
    int a,b;

    printf("enter the value of a here: ");
    scanf("%d",&a);

    printf("enter the value of b here: ");
    scanf("%d",&b);

    int sum = a + b;
    
    printf("the sum of a and b is: %d\n",sum);
    return 0;
}