#include <stdio.h>
int main()
{
int i, j, n, k;
 int disp[i][j];
    
    printf("enter the row %d", n);
    scanf("%d", &n);
    printf("Enter the column %d \n", k);
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("Enter value for disp[%d][%d]:", n, k);
            scanf("%d", &disp[i][j]);
        }
    }
    printf("Two Dimensional array elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", disp[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}