#include <stdio.h>
#include <stdlib.h>

void usage(char *program_name)
{
    printf("Usage: %s <message> <# of times to repeat>\n", program_name);
    exit(1);
}

int main(int arg_count, char *arg_list[])
{
    int i, count;
    printf("There were %d arguments provided:\n", arg_count);
    for (i = 0; i < arg_count; i++)
        printf("argument #%d\t-\t%s\n", i, arg_list[i]);

    if (arg_count < 3)      // If less than 3 arguments are used,
        usage(arg_list[0]); // display usage message and exit.

    count = atoi(arg_list[2]); // convert the 2nd arg into an integer
    printf("Repeating %d times..\n", count);

    for (i = 0; i < count; i++)
        printf("%3d - %s\n", i, arg_list[1]); // print the 1st arg
}