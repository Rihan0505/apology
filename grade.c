#include <stdio.h>
int main(){

    int marks;

    printf("enter the marks here: ");
    scanf("%d",&marks);

    if (marks <= 100 && marks >= 90){
        printf(" A grade");
    }

    else if( marks <= 89 && marks >= 80){
        printf(" B grade");
    }

    else if( marks <= 79 && marks >= 70){
        printf(" C grade");
    }

    else if ( marks <= 69 && marks >= 60){
        printf(" D grade");
    }

    else{
        printf(" FAIL ");
    }
    return 0;
}