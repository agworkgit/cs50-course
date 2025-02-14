#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); // passing addresses with &
    printf("x is %i, y is %i\n", x, y);
}

// bad version
/* void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
 */

// good version
void swap(int *a, int *b)
{
    int tmp = *a; // go to address a, take value and move it in tmp
    *a = *b; // go to value b and chance a to b
    *b = tmp; // go to address b and put tmp there
}
