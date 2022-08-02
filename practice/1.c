#include <stdio.h>
int main (){
    int i, n, arr[100], sum=0;
    printf("Enter the elements in array \n");
    scanf ("%d", &n);
    printf("Enter numbers \n");
    for (i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("the sum of array is %d", sum);
    return 0;
}