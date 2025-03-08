#include<stdio.h>
int main(){
    char str1[100],char str2[100];
    printf("You entered:");
    scanf("%s\n",&str1);
    scanf("%s\n",&str2);
    printf("%s",str1,str2);
    return 0;
}