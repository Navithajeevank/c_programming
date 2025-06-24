#include<stdio.h>
int main()
{
    int arr[10]={2,3,4,5,5,6};
    int pos,size=6;
    printf("enter position to delete :");
    scanf("%d",&pos);
    for(int i=pos;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    
    printf("array after deletion:");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}