#include <stdio.h>
int main()
{
    int n;
    printf("enter the number here: ");
    scanf("%d",&n);

    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("the factorial of this num is %d",fact);

    return 0;
}