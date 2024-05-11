#include <stdio.h>
int Prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main()
{
    int a, n;
    printf("Enter the lower bound (a): ");
    scanf("%d", &a);
    printf("Enter the upper bound (n): ");
    scanf("%d", &n);
    if (a > n)
    {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Prime numbers between %d and %d are: ", a, n);
    for (int i = a; i <= n; i++)
    {
        if (Prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

