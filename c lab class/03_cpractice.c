#include <stdio.h>
int main()
{
    int arr[2][3];

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value for disp[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Sum of the matrix is");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        arr[i][j]= arr[i][j]+ arr[i][j];
        printf("%d" , arr[i][j]);
    }
}