#include<stdio.h>
int main(){
    int n,i,rem=0,sum=0;
    printf("enter a number ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("Reverse is %d ", sum);
    return 0;
}