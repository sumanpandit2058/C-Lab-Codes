#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d,%d", &a,&b);
    if (a>b){
        printf("%d is the smallest", b);
    }
    else{
        printf("%d is the smallest", a);
    }
    return 0;
}