//10 Write a recursive function to compute the power of a number (Base^power).
#include<stdio.h>
int fun(int a,int b)
{
    if(b==0)
    {
       return 1;
    }
      return a*fun(a,b-1) ;

}
int main()
{
    int x,y;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&y);
    int z=fun(x,y);
    printf("%d^%d=%d",x,y,z);

}
