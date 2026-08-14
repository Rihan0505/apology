#include <stdio.h>
int main()
{
    int celsius,fehrenhent;

    printf("enter the celcius here: ");
    scanf("%d",&celsius);

    fehrenhent = (celsius * 9/5) + 32;

    printf("enter the value fehrenhent is: %d\n",fehrenhent);
    return 0;
}