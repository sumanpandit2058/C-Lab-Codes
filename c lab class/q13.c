#include<stdio.h>
int main(){
int a;
printf("enter your marks");
scanf("%d",&a);
if(a>=40){
    printf("you passed the exam and your grade is ");
    if(a>=90)
        printf("O");
     if(a>=80 && a<90)
        printf("E");   
    if(a>=70 && a<80)
        printf("A");
        if(a>=60 && a<70)
        printf("B");
        if(a>=50 && a<60)
        printf("C");
        if(a>=40 && a<50)
        printf("D");

}
else {
    printf("you failed the exam and your grade is F");
}


return 0;
}