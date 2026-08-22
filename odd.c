#include <stdio.h>
int main(){
    int num[4];
    int count = 0;

    for (int i = 0; i < 4; i++){
        scanf("%d",&num[i]);

        if(num[i] % 2 != 0){
            count++;
        }
    }
        printf("odd number = %d",count);
        return 0;
}