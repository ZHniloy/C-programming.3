#include <stdio.h>

int main()
{
    int a, n, i, sum = 0, count = 0;
    float avg;

    printf("Enter the starting value a: ");
    scanf("%d", &a);

    printf("Enter the ending value n: ");
    scanf("%d", &n);
    if (a % 2 == 0)
    {
        a++;
    }
    for (i = a; i <= n; i += 2)
    {
        sum += i;
        count++;
    }

    if (count > 0)
    {
        avg = (float)sum / count;
        printf("Sum of odd numbers between %d and %d: %d.\n", a, n, sum);
        printf("Average of odd numbers between %d and %d: %.2f.\n", a, n, avg);
    }
    else
    {
        printf("No odd numbers in the given range.\n");
    }

    return 0;
}

