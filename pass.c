#include <stdio.h>
int main(){
    int marks;

    printf("enter your marks here: ");
    scanf("%d",&marks);

    if (marks >= 40){
        printf(" PASS ");
    }

    else{
        printf(" FAIL ");
    }
    return 0;

}