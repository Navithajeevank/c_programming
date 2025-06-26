#include<stdio.h>
#define size 5
int top=-1;
int stk[size];

void push(int value)
{
    if(top==size-1)
    {
        printf("stack overflow!");
    }
    else
    {
        top++;
        stk[top]=value;
        printf("%d inserted into stack.\n",value);
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
    push(67);
    push(45);
   // display();
    printf("STACK:\n");
    for(int i=0;i<=top;i++)
    {
        printf("%d\n",stk[i]);
    }
    
}