#include <stdio.h>
int sum(int a ,int *x)
{
    int i,b;
    b=0;
    for(i=0;i<a;i++)
    {
        b= b+ *(x+i);
    }
    return b;
}
int main()
{
    int num,x,i;
    printf("How many elements do you want? ");
    
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        printf("Enter number ");
        scanf("%d", &arr[i]);
    }
    x = sum(num,arr);
    printf("%d", x);
    return 0;
}