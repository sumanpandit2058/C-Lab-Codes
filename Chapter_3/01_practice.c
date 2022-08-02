#include <stdio.h>
int main()
{
    int age;
    int vipPass = 1;
    printf("Enter ur age \n");
    scanf("%d", &age);
    printf("Enter ur vipPass \n");
    scanf("%d", &vipPass);
    if ((age <= 70 && age >= 18) || !(vipPass == 1))
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive");
    }

    return 0;
}