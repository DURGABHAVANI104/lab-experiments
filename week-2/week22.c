//fahrenheit and celsius


#include <stdio.h>

int main()
{
    float fahrenheit, celsius, result1, result2;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    result1 = (fahrenheit - 32) * 5.0 / 9.0;
    printf("Celsius = %.2f\n", result1);

    printf("Enter Celsius: ");
    scanf("%f", &celsius);

    result2 = (celsius * 9.0 / 5.0) + 32;
    printf("Fahrenheit = %.2f\n", result2);

    return 0;
}
