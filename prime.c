#include <stdio.h>
int main(){
    int num,i,j,flag = 0;
    // i = 2;
    scanf("%d",&num);
    i = 2;
    while(i<=num){
        j = 2;
        while(j<i){
            if(i%j==0){
                flag++;
                break;
            }
            j++;
        } 
        if(flag==0){
            printf("%d\n",i);
        }
        flag=0;
        i++;
    }
    return 0;
}