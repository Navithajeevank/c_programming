#include<stdio.h>
int main()
{
	int id;
	float amount,unit,total,surcharge=0.0;
	char name[50];
	printf("Enter the consumer id:");
	scanf("%d",&id);
	printf("Enter the consumer name:");
	scanf("%s",name);
	printf("unit consumed:");
	scanf("%f",&unit);


	if(unit<=199)
	{
		amount=unit*1.20;
	}
	else if(unit<400)
	{
		amount=unit*1.50;
	}
	else if(unit<600)
	{
        amount=unit*1.80;
	}
	else
	{
	    amount=unit*2.00;
	}
	
	
	
	
	if(amount>400)
	{
	    surcharge=amount*0.15;
	}
	total=amount+surcharge;
	
	
	printf("\nConsumer Id:%d",id);
	printf("\nConsumer Name:%s",name);
	printf("\nUnit consumed:%f",unit);
	printf("\nAmount Charges:%f",amount);
	printf("\nSurcharge Amount:%f",surcharge);
	printf("\nNet Amount paid by the customer:%f",total);
}