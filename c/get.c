#include <stdio.h>

int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%s", s); // scanf() function reads user input and writes it into memory locations specified by the arguments
    printf("s: %s\n", s);
}
