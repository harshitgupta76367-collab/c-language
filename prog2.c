#include<stdio.h>
int main(){
    int n1; int n2; int n3; int n4; int n5;
    int n6; int n7; int n8; int n9; int n10;


    printf("enter 1st number: ");
    scanf("%d",&n1);

    printf("enter 2nd number: ");
    scanf("%d",&n2);

    printf("enter 3rd number: ");
    scanf("%d",&n3);

    printf("enter 4th number: ");
    scanf("%d",&n4);

    printf("enter 5th number: ");
    scanf("%d",&n5);

    printf("enter 6th number: ");
    scanf("%d",&n6);

    printf("enter 7th number: ");
    scanf("%d",&n7);

    printf("enter 8th number: ");
    scanf("%d",&n8);

    printf("enter 9th number: ");
    scanf("%d",&n9);

    printf("enter 10th number: ");
    scanf("%d",&n10);

     int max= n1;
     if(n2>n1){
       max= n2;
     }
     if(n3>n1){
       max= n3;
     }
     if(n4>n1){
       max= n4;
     }
     if(n5>n1){
       max= n5;
     }
     if(n6>n1){
       max= n6;
     }
     if(n7>n1){
       max= n7;
     }
     if(n8>n1){
       max= n8;
     }
     if(n9>n1){
       max= n9;
     }
     if(n10>n1){
       max= n10;
     }
     printf("maximum number is : %d", max);
     return 0;



}