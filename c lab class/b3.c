#include<stdio.h>
int main(){
int arr[10],i=0,sum=0;
printf("Enter 10 numbers : \n");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
    sum=sum+arr[i];
}
printf("The sum of the numbers is : %d \n",sum);
return 0;
}
