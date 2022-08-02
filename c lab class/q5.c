#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d,%d", &a,&b);
    if (a+b > 50){
        printf("The multiplication of two numbers is %d", a*b);
    }
    else{
        printf("The sum is not greater than 50 so it cannot be printed");
    }
}