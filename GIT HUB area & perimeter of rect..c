#include <stdio.h>

int main()
{
    float length, width, area, perimeter;
    printf("Enter the length:");
    scanf("%f", &length);
    printf("Enter the width:");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area of the rectangle: %.2f square units.\n", area);
    printf("Perimeter of the rectangle: %.2f units.\n", perimeter);

    return 0;
}
