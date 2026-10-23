//square root

#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter number: ");
    scanf("%f",&n);
    if(n<0)
        printf("Invalid number");
    else
        printf("Square root = %.2f",sqrt(n));
    return 0;
}
