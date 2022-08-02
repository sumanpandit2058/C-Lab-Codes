#include <stdio.h>
int main(){
    int x,a=5;
    x= ++a + a++ + a;
    printf("the value of x is %d ", x);
    return 0;   
}