#include <stdio.h>
int main(){
    int age[10];

    for(int i = 0;i < 10; ++i){
        scanf("%d", &age[i]);
    }

    for(int i = 0;i < 10; ++i){
        printf("%d ", age[i]);
    }
        return 0;
}