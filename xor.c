#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    char b[100];
    printf("Enter any string : ");
    scanf("%s",&a);
    printf("Enter another string : ");
    scanf("%s",&b);
    int length = strlen(a);
    int len = strlen(b);
    if(length != len){
        printf("False");
        return 0;
    }
    else{
        int xor1 = 0,xor2 = 0,i;
        for(i = 0 ; i <= length ; i++){
            xor1 = xor1^a[i];
            xor2 = xor2^b[i];
        }
        if((xor1^xor2)==0)
            printf("Possible");
        else
            printf("Not Possible");
    }
    return 0;
}