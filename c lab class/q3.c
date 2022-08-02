#include<stdio.h>
int main(){
    int a;
    char b[100];
    char c[100];
     printf("What is your age \n");
    scanf ("%d", &a);
    printf("what is your name \n");
    scanf("%s", &b);
    printf("what is your fathers name \n");
    scanf("%s", &c);
    if (a > 18){
    printf ("%s", b);
    }
    else{
    printf("%s", c);
    }
    return 0;    /* code */
    
    
}