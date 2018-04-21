#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    argc = 2; // Specify the number of arguments that will be executed in the command line (1 for file name, 1 for number argument)
    if (!argv[1] || argc > 2 || argv[2]) // make sure argv[1] exists and make sure there is no more than 2 arguments made
    {
        printf("You dun goof'd\nTwo arguments required\n");
        return 1; // If so, return error
    }

    long long final;

    int num = atoi(argv[1]);
    for (long long i = 1; num >= 1; num--)
    {
        i = num * i;
        final = i;
    }

    printf("%lld\n", final);
}