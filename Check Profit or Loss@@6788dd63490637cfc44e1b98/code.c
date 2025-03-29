#include<stdio.h>
int main(){
    int cost price,int selling price;
    scanf("%d %d,&cost price,&selling price");
    if(selling price>cost price){
        printf("Profit\n");
    }
    else if(selling price<cost price){
        printf("Loss\n");
}
else{
    printf("No Profit No Loss\n");
}
return 0;
}