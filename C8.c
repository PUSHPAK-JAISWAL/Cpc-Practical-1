// this is a program to show the use of long keyword
// author Pushpak Jaiswal
#include <stdio.h>
void main()
{
    int a;
    long int b;
    long long int c;
    printf("The size of int is %d byte\n",sizeof(a));
    printf("The size due to use of long int is %d byte\n",sizeof(b));
    printf("The size due to use of long long int is %d byte\n",sizeof(c));
}