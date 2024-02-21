// program to find size of int float and double and char
// author Pushpak Jaiswal
#include <stdio.h>
void main()
{
    printf("The size of int is %d byte\n",__SIZEOF_INT__);
    printf("The size of float is %d byte\n",__SIZEOF_FLOAT__);
    printf("The size of double is %d byte\n",__SIZEOF_DOUBLE__);
    printf("The size of character is %d byte\n",__SIZEOF_WCHAR_T__);
}