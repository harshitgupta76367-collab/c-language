#include<stdio.h>
int main(){
    int p; 
    int r;
    int t;
    int SI;
    printf("p: ");
    scanf("%d", &p);
    printf("r: ");
    scanf("%d", &r);
    printf("t: ");
    scanf("%d", &t);
    SI = (p*r*t)/100;
    printf("SI is: %d", SI);
    return 0;
}