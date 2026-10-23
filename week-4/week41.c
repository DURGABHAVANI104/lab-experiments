//arthemetic expression

#include <stdio.h>
int main()
{
    int A=2,B=3,C=4,D=5,E=6,F=7,G=8;
    printf("(a) = %d\n",A+B*C+(D*E)+F*G);
    if(B!=0)
        printf("(b) = %d\n",A/B*C-B+A*D/3);
    printf("(c) A+++B---A has undefined behavior in C\n");
    printf("(d) J=(i++)+(++i) has undefined behavior in C\n");
    return 0;
}
