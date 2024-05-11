#include <stdio.h>

int main()
{
    int month, year;
    char *monthNames[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"
                         };

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    // Check for valid month
    if (month < 1 || month > 12)
    {
        printf("Invalid month number.\n");
        return 1;
    }

    // Handle February for leap year
    if (month == 2)
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            printf("%s %d has 29 days\n", monthNames[month - 1], year);
        }
        else
        {
            printf("%s %d has 28 days\n", monthNames[month - 1], year);
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("%s %d has 30 days\n", monthNames[month - 1], year);
    }
    else
    {
        printf("%s %d has 31 days\n", monthNames[month - 1], year);
    }

    return 0;
}

