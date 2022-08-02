#include<stdio.h>
int main(){
    int i;
    do
    {
        int n;
    printf("For addition Press 1 \nFor substraction Press 2 \nFor multiplication Press 3 \nFor division Press 4 \nEnter your choice :");
    scanf("%d",&n);
        int a,b;
        printf("Enter the numbers for required task :\n");
        scanf("%d %d",&a,&b);
        int sum,mult,div,sub;
        switch (n)
        {
        // int sum,mult,div,sub;
        case 1:
        sum=a+b;
        printf("The sum of numbers is :%d",sum);
            break;
        case 2:
        sub=a-b;
        printf("The substraction of numbers is :%d",sub);
        break;
        case 3:
        mult=a*b;
        printf("The multiplication of numbers is :%d",mult);
        break;
        case 4:
        if(b!=0)
    {
        div=a/b;
        printf("The division of numbers is :%d",div); }
        else printf("Division cant be found");
        break;
        default:
        printf("The Entered number is incorrect \nPlease try again");
            break;
        }
        printf("\nDo you want to perform more calculations?(1/0) : ");
        scanf("%d",&i);

    } while (i==1);
return 0;
}