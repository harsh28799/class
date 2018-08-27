#include<stdio.h>
#include<math.h>
char postfix[50];int stack[50];
int top=-1;
int pop(char ch)
{
    display();
    int a=stack[top--];
    display();
    int b=stack[top--];
    display();
    int res;
    switch(ch)
    {
        case '^':res=(pow(a,b));break;
        case '+':res=(a+b);break;
        case '-':res=(a-b);break;
        case '/':res=(a/b);break;
        case '*':res=(a*b);break;
        default :printf("wrong operator\n");exit(0);
    }
	printf("%d\n",res); 
	return result;
}
void push(char ch)
{
	int ele=(int)ch;
    	top++;
    	stack[top]=ele;
    	display();
}
void display()
{
    int temp;
    for(temp=top;temp>=0;temp--)
    printf("%c\t",stack[temp]);
    printf("\n");
}
int main()
{
    char c;
    int i,j=0;
    printf("enter the postfix expression\n");
    scanf("%s",postfix);
    char ch;
    int result;
    for(i=0;postfix[i]!='\0';i++)
    {
        ch=postfix[i];
        if(ch!='^'&&ch!='/'&&ch!='*'&&ch!='+'&&ch!='-')
            push(ch);
        else
        {
            result=pop(ch);
            push(result);
        }
    }
    int res=stack[0];
    if(top==0)
        printf("%d",res);
    else
        printf("invalid postfix\n");
    return 0;
}
