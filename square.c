#include <stdio.h>
int main()
{
    int n;
    printf("enter number here: ");
    scanf("%d",&n);

    int area;
    for (int i = 1; i <= n; i++){
        area = n*n;
    }
    printf("the square is %d",area);

    return 0;
}