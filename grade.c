#include <stdio.h>
int main()
{
    char grade;

    printf("enter your grade here ['A','B','C','D','F']");
    scanf("%c",&grade);

    switch(grade){

        case 'A':
        printf("A - very good");
        break;

        case 'B':
        printf("B - good");
        break;

        case 'C':
        printf("C - can do much better");
        break;

        case 'D':
        printf("D - need to upgrade more improvement required");
        break;

        case 'F':
        printf(" F - better luch next time");
        break;

        default:
        printf("invalid");
    }
    return 0;
}