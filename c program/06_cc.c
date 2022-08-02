#include <stdio.h>
int lar(int, int);
int lar(int x, int y)
{
    if (x>y)
    {
        printf("%d is the greatest number.", x);
    }
    else
    {
        printf("%d is the greatest number.",y);
    }
    return 0;
}
int main()
{
    int a, b;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    lar(a,b);
    return 0;  
}