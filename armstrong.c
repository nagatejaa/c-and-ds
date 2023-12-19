//to check a anumber is armstrong or not
#include <stdio.h>
int main(){
    int num,rem,temp,sum=0;
    printf("Enter num : ");
    scanf("%d",&num);
    temp = num;
    while(num > 0){
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }
    if(temp == sum){
        printf("Y");
    }
    else{
        printf("Not ");
    }
}

//normal method to find armstrong upto n
#include <stdio.h>
int arm(int);
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i = 0; i <=x;i++){
        if(arm(i)==1){
            printf("%d ",i);
        }
    }
}

int arm(int num){
    int rem,temp,sum = 0;
    temp = num;
    while(num > 0){
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }
    if(temp == sum){
        return 1;
   }
   else{
        return 0;
    }
    
}