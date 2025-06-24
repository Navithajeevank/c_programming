#include<stdio.h>
int main()
{
    int a[10]={12,2,3,6,4,1};
    int i,j,temp,n=6;
    printf("before swapping:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    
    printf("\nafter swaping:");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
}