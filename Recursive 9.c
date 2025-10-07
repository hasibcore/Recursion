//9.Write a recursive function to check whether a number is prime.
int isprime(int n,int z)
{
    if(n<=1)
    {
        printf("%d is not prime number",n);
        return;
    }

    if(n==z)
    {
        printf("%d is prime number",n);
        return;
    }
    if(n%z==0)
    {

    printf("%d is not prime",n);
    return 0;
    }

    return isprime(n,z+1);
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    isprime(a,2);
}
