#include<stdio.h>
int main()
{
    int angle1,angle2,angle3,sum;
    printf("enter 3 angle:");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    
    if(angle1>0 && angle2>0 && angle3>0 && sum==180)
    {
        printf("Triangle can be formed with these angles.");
    }
    else
    {
        printf("Triangle cannot be formed with these angles.");
    }
}