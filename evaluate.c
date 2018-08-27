#include<stdio.h>
int stack[50];
char postfix[50];
int top=-1;
int pop(char ch)
{
	int result;
	int a=stack[top--];
	int b=stack[top--];
	switch(ch)
	{
		case '^':result=pow(a,b);
			break;
		case '+':result=a+b;
			break;
		case '-':result=a-b;
			break;
		case '*':result=a*b;
			break;
		case '/':result=a/b;
			break;
		default:printf("wrong operater\n");
	}
	return result;
} 
void push(int ch)
{
	top++;
	stack[top]=ch;
}
void main()
{
	printf("enter the postfix expression\n");
	scanf("%s",postfix);
	int i;
	char ch;
	int r;
	for(i=0;postfix[i]!='\0';i++)
	{
		ch=postfix[i];
		if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/'&&ch!='^')
		{
			int num=((int)ch)-48;
			push(num);
		}
		else
		{
			r=pop(ch);
			push(r);		
		}
	}	
	if(top!=0)
		printf("invalid postfix\n");
	else
		printf("%d",stack[0]);
	return 0;
}
