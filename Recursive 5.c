//5.Write a recursive function to reverse an integer number.
#include<stdio.h>
int digrev(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }
    return digrev(n/10,rev*10+n%10);
}
int main()
{
  int a;
  printf("Enter an integer number : ");
  scanf("%d",&a);
  int z=digrev(a,0);
  printf("Reversed number of the digits is %d",z);
}

