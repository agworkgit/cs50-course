#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct // data struct creation
{
    string name; // key
    string number; // key
}
person; // struct name

int main(void)
{
    person people[3];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";

    people[2].name = "John";
    people[2].number = "+1-617-468-2750";

    string name = get_string("Name: "); // search for name

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0) // getting name
        {
            printf("Found %s\n", people[i].number); // getting number
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
