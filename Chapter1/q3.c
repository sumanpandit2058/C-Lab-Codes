#include <stdio.h>
int main (){
    float f,c;
    printf("Enter the temperature in c ");
    scanf("%f", &c);
    f = (c*9/5) + 35;
    printf("temp in faherenheit is %f", f);
    return 0;
}