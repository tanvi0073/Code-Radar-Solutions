#include<stdio.h>
int main(){
    int side1,side2,side3;
    scanf("%d %d %d",&a,&b,&c);
    if(side1==side2 && side2==side3){
        printf("Equilateral")
    }
    else if(side1==side2 || side2==side3 || side1==side3){
        printf("Isosceles")
    }
    else{
        printf("scalene")
    }

return 0;
}