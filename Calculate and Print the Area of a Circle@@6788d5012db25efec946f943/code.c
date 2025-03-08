#include<stdio.h>
int main(){
    float rad,area;
    float pi=3.14;
    scanf("%f",&rad);
    area=pi*rad*rad;
    printf("Area: %.2f\n",area);
    return 0;
}