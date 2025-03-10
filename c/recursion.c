#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    // if nothing to draw, stop
    if (n <= 0)
    {
        return;
    }

    draw(n - 1); // print pyramind of height n - 1

    // print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
