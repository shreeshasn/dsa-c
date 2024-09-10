#include<stdio.h>
#include<stdlib.h>
#define smax 5
void push();
void pop();
void display();
void palin();
int top=-1,stk[smax];

void main()
{
	int ch,d;
	while(1)
{
		printf("\n stack menu");
		printf("\n 1.PUSH: \n 2.POP: \n 3.Palindrome: \n 4.Display: \n 5.exit: \n");
		printf("enter your choice: \n");
		scanf("%d",&ch);

		switch(ch)
	{
		case 1: push(); break;
		case 2: pop(); break;
		case 3: palin(); break;
		case 4: display(); break;
		case 5: exit(0); break;
		default: printf("invalid choice"); break;
	}}

}
void push()
{
	int item;
	if(top==smax-1)
		printf(" \n stack is full \n");
	else
	{
		printf("\n enter the item to insert: \n");
		scanf("%d",&item);
		stk[++top]=item;
	}
}

void pop()
{
	int d;
	if(top==-1)
		printf("\n stack is empty \n");
	else
	{
		d=stk[top];
		top--;
		printf(" \n deleted element:%d \n",d);
	}
}

void display()
{
	int i;
	if(top==-1)
		printf("\n stack is empty \n");
	else
	{
		printf("\n contents are: \n");
		for(i=top;i>=0;i--)
			printf("%d \n",stk[i]);
	}
}

void palin()
{
	int j=0, flag=1, i=0;
	int rev[smax];
	if(top==-1 || top==0)	
	{
		printf(" \n palindrome cannot be checked \n");
		return;
	}
	else
	{
		for(i=top;i>=0;i--,j++)
			rev[j]=stk[i];
		for(i=0;i<=top;i++)
	{
		if(rev[i]!=stk[i])
		{
			flag=0;
			break;
		}
	}
	}
if(flag)
	printf("\n stack is a palindrome \n");
else	
	printf("\n stack is not a palindrome \n");

}


