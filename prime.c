#include <stdio.h>
int main(){
    int num,i,j,flag = 0;
    i = 1;
    scanf("%d",&num);
    while(i<=num){
        j = 2;
        while(j<i){
            if(i % j == 0){
                flag++;
            }
            j++;
        }
        if(flag==2){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}