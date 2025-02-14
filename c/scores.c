#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33; -- too much repetition, cringe, use array

    const int N = 3; // common place to capitalise variable if constant
    int scores[N];

    // scores[0] = get_int("Score: "); // dynamically getting score buy still bad design
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}
