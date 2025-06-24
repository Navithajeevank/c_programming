#include<stdio.h>
int main()
{
    int size=4,value,pos=0;
    int arr[4]={2,4,5,6};
    printf("enter the value to insert:");
    scanf("%d",&value);
    printf("enter the position:");
    scanf("%d",&pos);
    

    
    for(int i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[pos]=value;
    size++;
    
    printf("Array:");
    for(int i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }
}