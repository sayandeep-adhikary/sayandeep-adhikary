#include<stdio.h>

int main()
{
    char letter;
    int num;
    printf("Enter a character\n");
    scanf("%c", &letter);
    
    num = letter;
    printf("ASCII value of '%c': %d", letter, num);
    return 0;
}