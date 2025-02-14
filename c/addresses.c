#include <stdio.h>

/* int main(void)
{
    int n = 50;
    int *p = &n; // pointer declaration
    printf("%i\n", *p); // *p just means go to location
} */

/* asdasd */

// & address of operator (n) e.g 0x7fff511e33bc
// * de-reference operator, location in memory?
// %p is a pointer, an address of a variable
// int *p declares a variable (pointer) that stores the address in memory of a variable/integer
// pointers take 8 bytes (p)

int main(void)
{
    char *s = "HI!"; // native c - string
    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c\n", *(s + 2));
}
