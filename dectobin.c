#include <stdio.h>
#define n 10
int main(){
    int num,rem,arr[n]={0};
    printf("Enter number : ");
    scanf("%d",&num);
    int i = 1;
    while(num>0){
        rem = num%2;
        num = num/2;
        arr[n-i] = rem;
        i++;
    }
    for(int i = 0;i < n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}