#include<stdio.h>
int main(){
int a,rev=0,rem,b;
printf("enter a number : ");
scanf("%d",&a);
b=a;
while (a!=0)
{
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;
}
printf("%d \n",rev);
if(rev==b)
    printf("the given number is palindrome");
else
    printf("the given number is not palindrome");
return 0;
}