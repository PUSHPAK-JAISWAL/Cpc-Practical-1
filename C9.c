// program to check if the given number is even or odd
//author Pushpak Jaiswal
#include <stdio.h>
void main()
{
    int a;
    printf("Enter the number to check odd or even for.\n");
    scanf("%d",&a);
    if(a==0)
        printf("The given number is zero 0");
    else if(a%2==0)
        printf("The given number %d is even.",a);
    else 
        printf("The given number %d is odd.",a);
}