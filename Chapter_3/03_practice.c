#include <stdio.h>
int main(){
int a;
printf("enter a");
scanf("%d", &a);
(a%2 ==0) ? printf("%d is even number", a) : printf("%d is odd number", a);

return 0;
}