#include <stdio.h>
int main (){
    int num;
    int count=0;
    printf("Enter the number");
    scanf("%d", &num);
    count=func(num);
    printf("The number of digits are %d", count);
    return 0;
}
int func(int n)
{
    static int counter =0;
    if (n>0)
    {
        counter= counter+1;
        return func(n/10);
    }
    else
    return counter;
}
