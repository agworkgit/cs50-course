#include <cs50.h>
#include <stdio.h>

void meow(int n); // function prototype

int main(void)
{
    meow(3);
}

void meow(int n) // actual function
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
