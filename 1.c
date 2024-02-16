#include<stdio.h>

int main(){
    float h,r,sa,v,pi=3.14;
    printf("enter height of the cylinder\n");
    scanf("%f",&h);
    printf("enter radius of the cylinder\n");
    scanf("%f",&r);
    v=pi*r*r*h;
    sa=2*pi*r*h;
    printf("volume of the cylinder is %.2f\n",v);
    printf("surface area of the cylinder is %.2f",sa);
    return 0;
}