#include <stdio.h>
int main(){
    int num[4];
    int largest;

    for(int i = 0; i < 4; i++){
     scanf("%d",&num[i]);}

     largest = num[0];

     for(int i = 1; i < 4; i++){

     if(num[i] > largest){
        largest = num[i];
     }
    }

    printf("largest = %d",largest);
    return 0;
}