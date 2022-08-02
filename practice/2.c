#include <stdio.h>
int main(){
    int i, arr[10], sum=0;
    printf("Enter the marks \n");
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    printf("the marks are \n");
    for(i=0; i<10; i++){
printf("\nmarks[%d] = %d", i, arr[i]);
    }
}