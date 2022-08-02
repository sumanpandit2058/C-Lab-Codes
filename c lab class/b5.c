#include<stdio.h>
int main(){
int i,j,n;
printf("Enter the numbers : ");
scanf("%d",&n);

int num[n];
printf("Enter the numbers : \n");
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<n-1;i++)
{
    if(num[i]>num[i+1])
    {
    int temp=0;
    temp=num[i];
    num[i]=num[i+1];
    num[i+1]=temp;
    }
}
printf("The maximum number is : %d \n",num[i]);

for(i=0;i<n-1;i++)
{
    if(num[i]<num[i+1])
    {
    int temp=0;
    temp=num[i];
    num[i]=num[i+1];
    num[i+1]=temp;
    }
}
printf("The minimum number is : %d",num[i]);
return 0;
}