//program to swapping numbers 
// author Pushpak Jaiswal
#include <stdio.h>
void main() 
{
    int a, b, c;

    printf("Type a number for 'a': ");
    scanf("%d", &a);

    printf("Type a number for 'b': ");
    scanf("%d", &b);

    printf("Before swapping, 'a' has %d and 'b' has %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After swapping, 'a' has %d and 'b' has %d\n", a, b);
}
