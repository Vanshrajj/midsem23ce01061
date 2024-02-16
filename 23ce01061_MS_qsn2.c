#include<stdio.h>
#include<math.h>

// to find the perfect numbers between 1 to 100
int main(){
    int num,i;
    int sum=0;
    printf("Enter a num :");
    scanf("%d",&num);

    if (num>=1 && num<=100) {

        for(i=1;i<num;i++){
        if (num%i==0){
        sum = sum +i;}
        }
        if(sum==num) 
        {printf ("the number is a perfect numer\n");
        }
        else{printf("not a perfect number\n");
        }

    }
    else{
        printf ("error");}
     return 0;

}