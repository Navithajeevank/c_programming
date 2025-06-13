
#include <stdio.h>

int main()
{
    int maths,phy,che;
    int total_three,total_maph;
    printf("enter the marks:\n");
    printf("maths=");
    scanf("%d",&maths);
    printf("physics=");
    scanf("%d",&phy);
    printf("chemistry=");
    scanf("%d",&che);
    total_three=maths+phy+che;
    printf("total of three subjects=%d\n",total_three);
    total_maph=maths+phy;
    printf("total of maths and physics=%d\n",total_maph);
    
    if(maths>=65 && phy>=55 && che>=50 && total_three>=190 || total_maph>=140)
    {
        printf("candidate is eligible");
    }
    else
    {
        printf("candidate is not eligible");
    }
    return 0;
}
