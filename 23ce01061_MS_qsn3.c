#include <stdio.h>
#include<math.h>

// to determine whether a point lies inside a cirlce ,outside a circle, on the circle

int main(){
    int x_cordinate,y_cordinate,radius,x1,y1;
    printf("Enter x_cordinate :");
    scanf("%d",&x_cordinate);
    printf("Enter y_cordinate :");
    scanf("%d",&y_cordinate);
    printf("Enter radius :");
    scanf("%d", &radius);
    printf("Enter x1 :");
    scanf("%d", &x1);
    printf("Enter y1 :");
    scanf("%d", &y1);

    if((((x_cordinate-x1)*(x_cordinate-x1)+(y_cordinate-y1)*(y_cordinate-y1))-(radius*radius))==0){
        printf("point lies on the circle");

    }

    else if ((((x_cordinate-x1)*(x_cordinate-x1)+(y_cordinate-y1)*(y_cordinate-y1))-(radius*radius))>0){
        printf("point lies outside the circle");
    }
    else if ((((x_cordinate-x1)*(x_cordinate-x1)+(y_cordinate-y1)*(y_cordinate-y1))-(radius*radius))<0) {
        printf("point lies inside the circle");
    }

    return 0;


}