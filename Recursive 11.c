#include<stdio.h>
int gdc(int a,int b)
{
    if (b==0)
    {
       return a;
    }
    return gdc(b,a%b);

}
int main()
{

    int x,y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    int z=gdc(x,y);
    printf("The GDC of %d ,%d is %d ",x,y,z);
}
