//Write a recursive function to find the Nth Fibonacci number.
#include<stdio.h>
int fib(int a)
{
    if(a==0 || a==1)
    {
        return a;
    }
    return fib(a-2)+fib(a-1);
}
int main()
{
    int a;
    printf("Enter a nth fibonacci number : ");
    scanf("%d",&a);
  int x=fib(a);
  printf("The nth fibonacci number : %d",x);
}
