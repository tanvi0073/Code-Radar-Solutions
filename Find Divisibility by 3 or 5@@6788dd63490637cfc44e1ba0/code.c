#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%3==0){
        printf("Divisible by 3\n");
    }
    else if(n%5==0){
        printf("Divisible by 5\n");
    }
    else if(n%5==0 && n%3==0){
        printf("Divisible by Both\n");
    }
    else{
        printf("Not Divisible\n");
    }
    return 0;
}