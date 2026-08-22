#include <stdio.h>
int main(){
    int num[4];

    for(int i = 0; i < 4;i++){
        scanf("%d",&num[i]);
    }
    for(int i = 3; i >= 0; i--){
        printf("%d ",num[i]);
    }

    return 0;
}