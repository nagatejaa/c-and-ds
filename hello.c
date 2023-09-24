#include <stdio.h>
int main(){
   float num1,num2;
   printf("Enter two numbers \n");
   scanf("%f %f",&num1,&num2);
   float sum = num1 + num2;
   printf("The sum of %.1f and %.1f is %.1f",num1,num2,sum);
   return 0;
}
