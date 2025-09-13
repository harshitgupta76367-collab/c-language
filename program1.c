#include<stdio.h>
int main(){
    int x;
    int y;
    int sum;
    int avg;
    printf("1st num: ");
    scanf("%d",&x);
    printf("2nd num: ");
    scanf("%d",&y);
    sum= x+y;
    avg= (x+y)/2;
    printf("sum is: %d\n", sum);
    printf("avg is: %d\n", avg);
}