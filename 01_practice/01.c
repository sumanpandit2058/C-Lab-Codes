#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the 3 numbers :\n");
scanf("%d \n %d \n %d " , &a,&b,&c );
if (a>b){
    if (a>c){
 printf("%d is the largest", a);

    }
}
if (b>a){
    if (b>c){
        printf("%d is the largest", b);
    }
}
if (c>a){
    if (c>b){
        printf("%d is the largest", c);
    }
}
return 0;
}