#include<stdio.h>
int main(){
    int n3,n5;
    scanf("%d %d",&n3,&n5);
    if(n3%3==0){
        printf("Divisible by 3");
    }
    else if(n5%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Divisible by Both");
    }
    return 0;
}