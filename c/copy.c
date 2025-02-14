#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1; // abort early, if NULL not enough memory available
    }

    char *t = malloc(strlen(s) + 1); // add one for null, malloc gives us a new chunk of memory and allocates the copy
    if (t == NULL)
    {
        return 1; // abort early, if NULL not enough memory available
    }

    /* for (int i = 0, n = strlen(s); i <= n; i++) // plus 1 for null or less than equal instead
    {
        t[i] = s[i];
    } */

   strcpy(t, s); // function - same as for loop above, copy s into t

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t); // free the memory allocated for t
    return 0;

    // cs50 libs manage memory automatically
    // NULL is the sentinel value signifying error
}
