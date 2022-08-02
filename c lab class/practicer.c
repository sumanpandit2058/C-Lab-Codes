#include <stdio.h>

int main()
{
    int i, n, m, arr[20];
    printf("Enter size of array less than 20:\n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            printf("%d is present in the array.\n", m);
        }
        }
        
        
    return 0;
}