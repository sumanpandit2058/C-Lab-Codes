#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d,%d", &a,&b);
    if (a+b < 70){
        printf("the sum of two numbers is %d", a+b);
    }
    else{
        printf("the difference of two number is %d", a-b);
    }
        return 0;

}