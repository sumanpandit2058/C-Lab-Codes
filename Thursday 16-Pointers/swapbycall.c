//swap by call by value
#include <stdio.h>
void swap(int x, int y)
{
    int c;
    c=x;
    x=y;
    y=c;
    printf("Numbers after swapping are %d and %d", x,y);
   
}
int main()
{
    int a,b;
    printf("Enter first number ");
    scanf("%d", &a);
    printf("Enter second number ");
    scanf("%d", &b);
    swap(a,b);
    return 0;
}
