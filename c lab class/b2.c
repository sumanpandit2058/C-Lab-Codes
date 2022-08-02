#include <stdio.h> 
 
int main() { 
  int i, arr[10]; 
	 
  for(i=0; i<10; i++) { 
    printf("Enter number : "); 
    scanf("%d", &arr[i]); 
  } 
  printf("\nSorted Numbers\n"); 
  for(i=0; i<10; i++) { 
    printf(" marks [%d] = %d\n", i, arr[i]); 
  } 
  return 0; 
} 