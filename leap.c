#include <stdio.h>
int main()
{
    int year;

    printf("enter a year here: ");
    scanf("%d",&year);

if(year % 4 == 0){
    printf("leap year");
}

else{
    printf("it is not s leap year");
}
return 0;
}