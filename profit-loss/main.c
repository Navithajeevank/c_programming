#include<stdio.h>
int main()
{
    float amount,cost,sell;
    printf("enter the cost: ");
    scanf("%f",&cost);
    printf("Enter the selling price:");
    scanf("%f",&sell);
    
    if(sell>cost)
    {
        amount=sell-cost;
        printf("Profit:%f",amount);
    }
    else if(cost>sell)
    {
       amount=cost-sell;
       printf("loss:%f",amount);
    }
    else
    {
        printf("No loss,No profit.");
    }
}