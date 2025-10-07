//Write a recursive function in C to print numbers from 1 to N.
#include<stdio.h>
void num(int n,int m)
{
    if (n==0)
    {
        return 0;
    }
    num((n-1),m);
if(n<m){
    printf("%d ,",n);
}
else
    {
  printf("%d",n);
    }
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    num(a,a);
}
