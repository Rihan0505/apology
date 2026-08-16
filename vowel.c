#include <stdio.h>
int main()
{
    char alphabet;

    printf("enter alphabet here: ");
    scanf("%c",&alphabet);

    switch(alphabet){

        case 'a':
        printf("it is vowel");
        break;

         case 'e':
        printf("it is vowel");
        break;

         case 'i':
        printf("it is vowel");
        break;

         case 'o':
        printf("it is vowel");
        break;

         case 'u':
        printf("it is vowel");
        break;

        default:
        printf("this is not vowel");
        break;
    }
    return 0;
}