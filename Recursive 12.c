#include<stdio.h>
int gdc(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gdc(b,a%b);
}
int lcm(int a,int b)
{
    return a*b/gdc(a,b);
}
    int main()
{

    int x,y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    int z=lcm(x,y);
    printf("The LCM of %d ,%d is %d ",x,y,z);
}

