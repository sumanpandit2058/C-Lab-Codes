//use function to find product without argument
#include<stdio.h>
int product();
int product(){
    int x,y,mult;
    printf("Enter first number");
    scanf("%d", &x);
     printf("Enter second number");
    scanf("%d", &y);
    mult=x*y;
    return mult;
}
int main()
{
    int mult;
    mult=product();
    printf("The product is %d", mult);
    return 0;
}
