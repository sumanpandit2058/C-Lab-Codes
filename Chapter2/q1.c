#include <stdio.h>
int main(){
    int num;
printf("enter a number :");
scanf("%d", &num);
if (num%97==0){
    printf("the number is divisible by 97");
}
else{
     printf("the number is not divisible by 97");
}
return 0;
}