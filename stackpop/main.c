#include<stdio.h>
#define size 10
int top=-1;
int stk[size];

void push(int value)
{
	if(top==size-1)
	{
		printf("stack overflow!cannot insert\n");
	}
	else
	{
		top++;
		stk[top]=value;
		printf("%d inserted into stack.\n",value);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow!cannot pop");
	}
	else
	{
		printf("%d deleted from the stack.\n",stk[top--]);
	}
}
//void display()
//{

//}
int main()
{
	push(10);
	push(23);
	push(34);
	push(45);
	push(56);
	
	// display();
	printf("STACK:\n");
	for(int i=0; i<=top; i++)
	{
		printf("%d\n",stk[i]);
	}
	pop();
	pop();
	pop();
	pop();
	

}