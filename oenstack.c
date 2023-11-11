#include <stdio.h>
#include <stdlib.h>
#define n 5
int stack[n];
int top = -1;
int i;

void push(){
    int x;
    printf("Enter element : ");
    scanf("%d",&x);
    if(top == n-1){
        printf("overflow");
    }
    else{
        top++;
        stack[top] = x;
    }
}

void pop(){
    int item;
    if(top == -1){
        printf("Underflow");
    }
    else{
        item = stack[top];
        top--;
        printf("%d",item);
    }
}

void peek(){
    if(top == -1){
        printf("Empty stack");
    }
    else{
        printf("%d",stack[top]);
    }
}

void display(){
    for(i = top; i >=0 ; i--){
        printf("%d ",stack[i]);
        printf("\n");
    }
}

int main(){
    int ch;
    do{
    
        printf("\n*****MENU*****");
        printf("\nEnter choice \n 1 : Push \n 2 : Pop \n 3 : Peek \n 4 : Display \n");
        scanf("%d",&ch);
        switch(ch){
            case 1 : push(); break;
            case 2 : pop(); break;
            case 3 : peek(); break;
            case 4 : display(); break;
            default: printf("Invalid");
        }
    } while(ch!=0);
    return 0;
}

