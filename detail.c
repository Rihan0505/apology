#include <stdio.h>
int main()
{
    int age;
    char name[50],college[50];
    printf("enter ur name: ");
    scanf("%s",name);

    printf("enter age: ");
    scanf("%d",&age);

    printf("enter college name: ");
    scanf("%s",college);

    printf("your name is:  %s\n",name);
    printf("your age is: %%d\n ", age);
    printf("your college name is: %s\n",college);

    return 0;
}