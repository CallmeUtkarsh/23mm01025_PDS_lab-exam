#include<stdio.h>

int main(){
    int Ll,Ul,p=0;
    printf("enter the upper limit");
    scanf("%d",&Ul);
    printf("enter the lower limit");
    scanf("%d",&Ll);
    for(int i=Ll;i<=Ul;i++){
        for(int j=0;j<=i;j++){
            if(i%j==0){
                p+=j;
                }
            }
        if(p==i){
        printf("%d",i);
        }    
    }
}

