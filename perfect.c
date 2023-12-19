//number is perfect or not
#include <stdio.h>
int main(){
    int num,sum = 0,flag = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    int arr[num/2];
    for(int i = 1 ; i <= num /2 ; i++){
        
        if(num%i==0){
            arr[flag]=i;
            flag++;
        }
    }
    for(int i = 0 ; i < flag ; i ++){
        printf("%d ",arr[i]);
        sum += arr[i];
    }
    if(sum == num){
        printf("\nsum = %d \nPerfect",sum);
    }
    else{
        printf("\nsum = %d \nNot");
    }
    return 0;
}

//Upto a range to get perfect numbers
#include <stdio.h>
int per(int);
int main(){
    int x;
    printf("Enter range 0 to ");
    scanf("%d",&x);
    for(int i = 0 ; i <= x;i++){
        if(per(i)==1){
            printf("%d ",i);
        }
    }
    return 0;
}
int per(int num){
    int sum = 0,flag = 0;
    int arr[num/2];
    for(int i = 1 ; i <= num /2 ; i++){
        
        if(num%i==0){
            arr[flag]=i;
            flag++;
        }
    }
    for(int i = 0 ; i < flag ; i ++){
        sum += arr[i];
    }
    if(sum == num){
        return 1;
    }
    else{
        return 0;
    }
}