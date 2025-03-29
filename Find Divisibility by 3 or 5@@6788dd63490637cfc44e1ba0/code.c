#include<stdio.h>
int main(){
    int n3,n5;
    sacnf("%d %d",&n3,&n5);
    if(n3%3==0 && n5%5==0){
        printf("Divisible by Both");
    }
    else if(n3%3==0){
        printf("Divisible by 3");
    }
    else{
        printf("Divisible by 5");
    }
}