#include <stdio.h>
int product();
int product()
{
    int first, second, product = 1;
    printf("Enter first Number:");
    scanf("%d", &first);

    printf("Enter second Number:");
    scanf("%d", &second);

    product = product * first * second;

    return product;
}

int main()
{
    int prod;
    prod = product();
    printf("Product of two numbers:\n%d", prod);
    return 0;
}