#include<stdio.h>
#include<stdlib.h>
int insert_beg(int);
int insert_end(int);
void display();
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
int main(){
	int ch,val;
	while(1){
		printf("\n******Menu*****");
		printf("\n1.Insertion at the beginning of LL \n2.insertion at the end \n3.display \n4.Exit");
		printf("\nEnter of your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter the value");
			scanf("%d",&val);
			insert_beg(val);break;
			case 2:printf("\nEnter the value");
			scanf("%d",&val);
			insert_end(val);
			case 3:display();break;
			case 4:exit(0);
			default:printf("\nEnter correct choice");
		}
		return 0;
	
}
int insert_beg(int val)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL)
	newnode->next=NULL;
	else
	newnode->next=head;
	head=newnode;
	
	return 0;
}
void display(){
	struct node *tmp=head;
	if(head=NULL)
	printf("\nthe stack is empty");
	else{
	while(tmp!=NULL){
		printf("\n%d",tmp->data);
		printf("----")
		tmp=tmp->next;
		}
	}
	printf("NULL");
}
int insert_end(int val){
	struct node *new node;
	struct node *temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	head=newnode;
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
			
		}
		temp->next=newnode;
	}
}
}













