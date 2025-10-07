//Write a recursive function to find the sum of first N natural numbers. (1+2+3 + ......+N)
#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);

}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
  int x=sum(a);
  printf("The sum of first %d natural numbers is %d",a,x);
}
