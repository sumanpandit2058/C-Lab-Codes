// Factorial of a number using recursion
#include <stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("Enter the number");
    scanf("%d", &n);
    f = fact(n);
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    else
    {
        n = n * fact(n - 1);
        printf("The factorial of given number is %d", n);
        return n;
    }
}