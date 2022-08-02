#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, len1, len2;
    char string1[100], string2[100], string3[100];
    printf("Enter first string ");
    gets(string1);
    printf("Enter second string ");
    gets(string2);
    i = 0;
    while (string1[i] != '\0')
    {
        len1++;
        i = i + 1;
    }
    i = 0;
    while (string2[i] != '\0')
    {
        len2++;
        i = i + 1;
    }

    i = 0;
    for (j = 0; j < len1; j++)
    {
        string3[i] = string1[j];
        i++;
    }

    k = 0;
    string3[len1] = ' ';
    for (j = len1 + 1; k < len2; j++)
    {
        string3[j] = string2[k];
        k++;
    }

    printf("String after concatenating is %s", string3);

    return 0;
}