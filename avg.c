#include <stdio.h>
int main(){
    int num[4];
    int sum=(0);
    float avg;

    for (int i = 0;i < 4; i++){
        scanf("%d",&num[i]);
        sum = sum + num[i];
        avg = sum / 4.0;
    }
    printf("%.2f",avg);
    return 0;
}