#include<stdio.h>
#include<math.h>

int main(){
    float x,y,x1,y1,r;
    printf("enter the center of the circle");
    scanf("%f",&x);
    scanf("%f",&y);
    printf("enter the radius of the circle");
    scanf("%f",&r);
    printf("enter the desired coordinate");
    scanf("%f",&x1);
    scanf("%f",&y1);
    float r1=sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
    if(r1>r){
        printf("(%f,%f) lies outside the circle",x1,y1);
    }
    else if(r1<r){
        printf("(%f,%f) lies inside the circle",x1,y1);
    }
    else{
        printf("(%f,%f) lies on the circle",x1,y1);
    }
}