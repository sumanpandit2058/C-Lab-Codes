//use of function to find greatest number
#include <stdio.h>
int greater(int, int);
int greater(int x, int y){
    int greater_num;
    if(x>y){
        greater_num=x;
    }
    else
    {
        greater_num=y;
    }
    return greater_num;
}
int main(){
    int a,b,greater_num;
    printf("Enter first number ");
    scanf("%d", &a);
    printf("Enter second number ");
    scanf("%d",&b);
    greater_num=greater(a,b);
    printf("The greater number among %d and %d is %d", a,b,greater_num);
    return 0;
}

