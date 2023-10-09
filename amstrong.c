#include <stdio.h>
int main(){
    int sum = 0,num,rem,temp;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    while(num != 0){
        rem = num % 10;
        sum += rem * rem * rem;
        num = num /10;
    }
    printf("%d\n",sum); 
    if(temp == sum)
        printf("Amstrong Number");
    else
        printf("Not Amstrong Number");
    return 0;
}