#include <stdio.h>

int main(){
    int a,b,c;
    scanf(" %d %d %d",&a,&b,&c);
    if(a+b && b+c && a+c>b){
        printf("valid");
    }
    else{
        printf("invalid");
    }
    return 0;
}