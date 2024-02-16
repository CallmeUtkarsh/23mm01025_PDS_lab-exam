#include<stdio.h>

int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    for(int i=1;i<number/2;i++){
        for(int j=2;j<i;j++){
            if(i%j==0 && (number-i)%j==0){
                printf("%d,%d\n",i,number-i);
            }
        }
    }
   
    
    return 0;
}
    
