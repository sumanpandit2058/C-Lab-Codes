// find the sum of all element using function and pointer variable
#include <stdio.h>
int fun();
fun(int *p)
{
    int sum = 0;
    for (int j = 0; j < 10; j++)
    {
        sum = sum + *(p + j);
    }
    return sum;
}

int main()
{
    {
        int sum, arr[10];
        int j;
        printf("Enter the elements to add: ");
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &arr[j]);
        }
        sum = fun(arr);
        printf("The sum of the numbers is : %d", sum);
    }
    return 0;
}
