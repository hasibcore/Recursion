//Write a recursive function to find the factorial of a given number.
#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int z=fact(a);
    printf("\nFactorial of the number %d",z);
    return 0;
}
