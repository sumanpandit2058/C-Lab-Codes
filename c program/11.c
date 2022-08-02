//To find product of a number using function by means of argument passing//

#include<stdio.h>
int product(int,int);
int product(int x, int y){
    return x*y;
}
int main()

{
    int a,b,mult=0;
    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);
    mult=product(a,b);
    printf("The product of %d and %d is %d ", a,b,mult);
    return 0;
}

