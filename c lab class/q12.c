#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if(a%2 ==0){
        printf("the number is even");
        if (a%4 ==0){
            printf(" and the number is divisible by 4");
        }
        else{
            printf(" and the number is not divisible by 4");
        }
    }
    else {
        printf("the number is odd");
        if(a%3 ==0){
            printf(" and the number is divisible by 3");
        }
        else {
            printf(" and the number is not divisible by 3");
        }
    }
    return 0;
    
}