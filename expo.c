#include <stdio.h>
int main(){
    int b,p,r=1;
    printf("Enter base and power : ");
    scanf("%d %d",&b,&p);
    for(int i = 1;i<=p;i++){
        r = r *b;
    }
    printf("%d",r);
    return 0;
}