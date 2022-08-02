#include <stdio.h>
int main (){
    float pi=3.14, r , h, volume;
    printf("Enter the value of r ");
    scanf("%f", &r);
    printf("enter the value of h");
    scanf("%f", &h);
    volume= pi*r*r*h;
    printf("the area of circle is %f",volume);
    return 0;
}