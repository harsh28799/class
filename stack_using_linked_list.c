#include<stdio.h>
#include<stdlib.h>
typedef struct nodal
{
    int info;
    struct node *next;
}node;
int count=0;
node *top;
void push(int num)
{
    node *ptr=(node*)malloc(sizeof(node));
    ptr->info=num;
    ptr->next=NULL;
    if(top==NULL)
        top=ptr;
    else
    {
        ptr->next=top;
        top=ptr;
    }
	count++;
}
void pop()
{
    node *ptr=top;
    top=top->next;
    free(ptr);
	count--;
}
int isStackEmpty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
void display()
{
    node *ptr=top;
    printf("-->");
    while(ptr!=NULL)
    {
        printf("\t|%d|\n",ptr->info);
        ptr=ptr->next;
    }
}
int isStackFull()
{
	if(count==10)
		return 1;
	else
		return 0;
}
int main()
{
    char ch;
    int num;
    top=NULL;
    int choice;
    do
    {
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the element you want to insert\n");
                   scanf("%d",&num);
			if(isStackFull())
				printf("the stack is full\n");
			else
			{
                  		 push(num);
			}
                   break;
            case 2:if(isStackEmpty())
                       printf("Stack is Empty\nElement cannot be popped\n");
                   else
                       pop(top);
                   break;
            case 3:if(isStackEmpty(top))
                       printf("Stack is empty\n");
                   else
                       printf("Stack is not empty\n");
                   break;
	    case 4:if(isStackFull())
			printf("stack is full\n");
		   else 
			printf("stack is not full\n");
			break;
            case 5:if(isStackEmpty(top))
                       printf("Stack is Empty\n");
                   else
                       display(top);
                   break;
            default:printf("Wrong choice\n");
        }
        printf("Do you want to continue (Y/N)\n");
        scanf("%s",&ch);
    }while(ch=='y'||ch=='Y');
    return 0;
}

