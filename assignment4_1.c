#include<stdio.h>
#include<stdlib.h>
typedef struct nodal
{
	int info;
	struct node *next;
}node;
void createEmptyQueue(node **front,node **rear)
{
	front=NULL;
	rear=NULL;
	if(front==rear)
		printf("empty queue created\n");
	else
		printf("unable to create queue");
}
int checkEmptyQueue(node *front,node *rear)
{
	if(front==rear)
		return 1;
	else 
		return 0;
}
void enqueue(int num,node **front,node **rear)
{
	node *ptr=(node*)malloc(sizeof(node));
	ptr->info=num;
	ptr->next=NULL;
	if(front==NULL)
	{
		
	}
}
void main()
{
	int choice;
	node *front=NULL;
	node *rear=NULL;
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
     		case 1:createEmptyQueue(&front,&rear);
			break;
	}
}
