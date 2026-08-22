#include <stdio.h>
int main(){
    int num[3];
    int count=0;

    for(int i = 0; i < 3; i++){
        scanf("%d",&num[i]);

        if(num[i] % 2 == 0){
            count++;
        }
    }
    printf("even number = %d",count);
    return 0;
    
}