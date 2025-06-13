
#include <stdio.h>

int main()
{
    int h;
    printf("enter the height:");
    scanf("%d",&h);
    if(h>180)
    {
        printf("person is tall");
    }
    else if(h>=160&&h<=180)
    {
        printf("person is average");
    }
    else if(h>150)
    {
        printf("person is short");
    }
}
