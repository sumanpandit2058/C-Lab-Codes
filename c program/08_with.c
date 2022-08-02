#include <stdio.h>
int product(int, int);
int product(int a, int b)
{
    int product=1;
    product = product * a * b;
    return product;
}

int main()
{
    int prod, first, second;
    printf("Enter first Number:");
    scanf("%d", &first);

    printf("Enter second Number:");
    scanf("%d", &second);

    prod = product(first, second);
    printf("Product of two numbers:\n%d", prod);
    return 0;
}