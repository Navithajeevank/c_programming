
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter num");
    scanf("%d",&a);
    printf("enter num");
    scanf("%d",&b);
    printf("enter num");
    scanf("%d",&c);
    if((a>b)&&(a>c))
    {
        printf("%d is greatest",a);
        
    }
    else if(b>c)
    {
        printf("%d is greatest",b);
    }
    else
    {
        printf("%d is greatest",c);
    }
    return 0;
}
