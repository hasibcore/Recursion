//Write a recursive function to calculate the sum of digits of a number.
#include<stdio.h>
int dig(int n)
{
    if(n==0)
    {
        return;
    }
    return (n%10)+dig(n/10);
}
int main()
{
  int a;
  printf("Enter an integer number : ");
  scanf("%d",&a);
  int z=dig(a);
  printf("Sum of the digits of a number is %d",z);
}
