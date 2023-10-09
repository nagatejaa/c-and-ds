#include <stdio.h>
int main(){
    int num,rev = 0,temp,rem,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    i = 0;
    while(num >0){
        rem = num % 10;
        rev = rev*10 + rem;
        num = num / 10;
        i++;
    }
    printf("%d \n",rev);
    if(temp == rev)
        printf("Palindrome");
    else
        printf("Non Palindrome");
    return 0;
}