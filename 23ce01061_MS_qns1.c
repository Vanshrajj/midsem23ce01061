#include <stdio.h>
//To find volume and surface area of a cylinder 
int main(){
    float radius,height,surface_area,volume ;
    float pi =3.14 ;
    printf ("Enter radius :");
    scanf ("%f",&radius);
    printf ("Enter height :");
    scanf ("%f",&height);
    volume = pi*radius*radius*height ;
    surface_area = 2*pi*radius*height;

    printf("volume is %0.2f\n",volume );
    printf( "surface_area is %0.2f\n",surface_area);



     return 0;
}