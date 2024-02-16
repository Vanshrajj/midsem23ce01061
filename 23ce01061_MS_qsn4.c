#include<stdio.h>
//to check wether a number is sum of two composite numbers

int main(){
    int num,i ,t1;
    int sum=0;
    printf("Enter num:");
    scanf("%d",&num);
    for (i=2;i<(i/2);i=i+2){
        t1= num-i;
        if(t1%2==0){
            sum= t1 + i;
        }

    }
    if (sum==num){
        printf ("%d",t1);
        printf("%d",i);
    }
}