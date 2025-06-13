
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("The triangle is Equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("The triangle is Isosceles");
    }
    else
    {
        printf("The triangle is Scalene.");
    }
    return 0;
}
