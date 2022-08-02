#include<stdio.h>
int main(){
    int i, n, num[n], max, min;
    printf("How many elements you want \n");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        printf("\nenter  numbers");
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (i=1; i<n; i++){
       if (num[i]> max)
       max = num[i];
    }
    printf("the max is %d", max);
    return 0;
}