#include <stdlib.h>
#include <stdio.h>

void begin();
void end();
void after();
void before();
void display();

struct node{
    int data;
    struct node* next;
};

struct node *head = NULL;
struct node *tail = NULL;

int main(){
int ch;
    while (1)
    {
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            begin();
            break;
        case 2:
            end();
            break;
        case 3:
            before();
            break;
        case 4:
            after();
            break;
        case 5:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Invalid\n");
        }
    }
}


void begin(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter value : ");
    scanf("%d",&val);
    newnode->data= val;
    if(head == NULL){
        newnode->next=NULL;
        head = newnode;
        tail = newnode;
    }
    else{
        newnode->next=head;
        head = newnode;
    }
}
void end(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter value : ");
    scanf("%d",&val);
    newnode->data= val;
    if(head == NULL){
        newnode->next=NULL;
        head = newnode;
        tail = newnode;
    }    
    else{
    tail->next = newnode;
    tail = newnode;
    tail->next= NULL;
    }
}
void after(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int ele,val;
    printf("Enter the element : ");
    scanf("%d",&ele);
    struct node *ptr = head;
    struct node *preptr = head;
    while(ptr != NULL){
        if(preptr->data == ele){
            printf("Enter val : ");
            scanf("%d",&val);
            newnode->data = val;
            preptr->next = newnode;
            newnode->next= ptr;
            break;
        }
        else{
            preptr = ptr;
            ptr = ptr->next;
        }
    }
    if (ptr == NULL) {
        printf("Element %d not found in the linked list.\n", ele);
    }
}
void before(){
     struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int ele,val;
    printf("Enter the element : ");
    scanf("%d",&ele);
    struct node *ptr = head;
    struct node *preptr = head;
    while(ptr != NULL){
        if(ptr->data == ele){
            printf("Enter val : ");
            scanf("%d",&val);
            newnode->data = val;
            preptr->next = newnode;
            newnode->next= ptr;
            break;
        }
        else{
            preptr = ptr;
            ptr = ptr->next;
        }
    }
    if (ptr == NULL) {
        printf("Element %d not found in the linked list.\n", ele);
    }

}
void display(){
    struct node *temp = head;
    if(head == NULL){
        printf("Empty LL");
    }
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");

}
