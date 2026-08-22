#include <stdio.h>
int main(){
    int num[4];
    int smallest;

    for(int i = 0; i < 4; i++){
        scanf("%d",&num[i]);
    }

    smallest = num[0];

    for(int i = 1; i < 4 ; i++){
        
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
        printf("smallest = %d",smallest);
        return 0;
    
}