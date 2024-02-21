// program to check if the given character is vowel or a consonat
// author Pushpak Jaiswal
#include <stdio.h>
void main() 
{
    char c;
    printf("Enter an Alphabet: \n");
    scanf("%c", &c);

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
        printf("The given character %c is a vowel in Lower Case",c);
    }
    else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
        printf("The given character %c is a vowel in Upper Case.",c);
    }
    else if((c >= 'B' && c <= 'Z')) {
        printf("The given character %c is a consonant in Upper Case.",c);
    }
    else if((c >= 'b' && c <= 'z')) {
        printf("The given character %c is a consonant in Lower Case.",c);
    }
    else {
        printf("The given character %c is not an Alphabet.",c);
    }
}
