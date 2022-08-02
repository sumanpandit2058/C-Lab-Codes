#include <string.h>
#include<stdio.h>
int main()
{
    int i, count=0;
    char arr[20];
    printf("Enter string:\n");
    gets(arr);
    for (i=0; arr[i]!='\0'; i++)
    {
count++;
    }
    printf("Length of string:\n%d", count);
    return 0;
}