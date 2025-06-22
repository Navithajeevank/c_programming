#include<stdio.h>
int main()
    {
        int month;
        printf("enter a month number(1 to 12):");
        scanf("%d",&month);
        
        switch(month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("This month has 31 days.");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("This month has 30 days.");
                break;
            case 2:
                printf("this month has 28 days(29 in a leap year.");
                break;
            default:
                printf("invalid ! please enter a month number between 1 to 12:");
                break;
        }
        
    }