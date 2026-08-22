#include <stdio.h>
int main()
{
    int n;
    printf("enter number here:  ");
    scanf("%d",&n); 


    for(char i = 1 ; i <= n; i = i  + 1){
           for(int  j = 1 ; j <= i; j++){
            printf("*");
           }
           printf("\n");
    }
    return 0;

}