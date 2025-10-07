//2. Write a recursive function in C to print numbers from N to 1.
#include <stdio.h>

void num(int n, int i)
{
    if(i > n)
    {
        return;
    }

    num(n, i + 1);
    printf("%d ", i);
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Numbers from %d to 1:\n", a);
    num(a, 1);

    return 0;
}

//another
#include <stdio.h>

void num(int n)
{
    if(n == 0)
    {
        return;
    }

    printf("%d ", n);
    num(n - 1);
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Numbers from %d to 1:\n", a);
    num(a);

    return 0;
}
