//calculator using switch

#include <stdio.h>
int main()
{
    float a,b;
    int ch;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    printf("1.Add 2.Subtract 3.Multiply 4.Divide\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Result = %.2f",a+b); break;
        case 2: printf("Result = %.2f",a-b); break;
        case 3: printf("Result = %.2f",a*b); break;
        case 4:
            if(b==0)
                printf("Division by zero is not possible");
            else
                printf("Result = %.2f",a/b);
            break;
        default: printf("Invalid option");
    }
    return 0;
}
