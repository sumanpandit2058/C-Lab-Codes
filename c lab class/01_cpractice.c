#include <stdio.h>
#include<string.h>
int main(){
 char ch1[20] = {'s','u','m','a','n' };
 char ch2[20] = {'p','a','n','d','i','t'};
 printf("The length of string is %d\n", strlen(ch1));
 printf("comparing two string %d\n",strcmp(ch1,ch2));
 printf("The strings after conconante is %s\n", strcat(ch1 ,ch2));
 printf("The string after reverse is %s\n", strrev(ch1));
 return 0;
}