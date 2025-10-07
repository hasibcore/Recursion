//Write a recursive function to count the digits of an integer number and print the digits.
#include<stdio.h>
int dig(int n)
{
    if(n==0)
    {
        return;
    }
printf("%d",n%10);
     //n=n/10;
    return (1+dig(n/10));


}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int z=dig(a);
    printf("\ncounter digits are %d",z);
}

