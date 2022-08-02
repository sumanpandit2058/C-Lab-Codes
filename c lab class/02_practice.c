#include <stdio.h>
int main()
{
    int i, n, arr[n];
    printf("Enter size of array :\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            printf("Even Number present:%d\n", arr[i]);
        }
        else
        {
            printf("Odd Number present:%d\n", arr[i]);
        }
    }
    return 0;
}