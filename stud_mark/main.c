#include<stdio.h>
int main()
{
    int roll;
    float phy,che,ca,total,per;
    char name[50],divi[50];
    printf("enter the name:");
    scanf("%s",name);
    printf("enter roll number:");
    scanf("%d",&roll);
    printf("enter the marks in three subjects:");
    scanf("%f %f %f",&che,&phy,&ca);
    
    total=phy+che+ca;
    per=(total/300*100);
    
    
    printf("\nRoll No:%d",roll);
    printf("\nName:%s",name);
    printf("\nMarks in Physics:%f",phy);
    printf("\nMarks in Chemistry:%f",che);
    printf("\nMarks in Computer application:%f",ca);
    printf("\nTotal marks:%f",total);
    printf("\npercentage:%f\n",per);
    
    if(per>=80)
    {
        printf("Division:First.");
    }
    else if(per>=70)
    {
        printf("Division:Second.");
    }
    else if(per>=60)
    {
        printf("Division:Third.");
    }
    else
    {
        printf("Division:Fail.");
    }
    
    
}