// program to compute quotient and remainder
// author Pushpak jaiwal
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the numbers to find quotient and remainder for.\n");
    scanf("%d %d",&a,&b);
    if(a!=0 && b!=0)
    {
        printf("The quotient and remainder for %d and %d is %d and %d respectively",a,b,a/b,a%b);
    }
    else
    {
        printf("Invalid input Arithmatic error cannot divide or multiply by zero(0)");
    }
}