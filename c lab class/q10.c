#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d", &a);
    if(a<0){
        printf("the number is negative");
    }
    else{
        printf("The number is positive");
    }
    return 0;
}