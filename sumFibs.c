#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    argc = 2; // Specify the number of arguments that will be executed in the command line (1 for file name, 1 for key argument)
    if (!argv[1] || argc > 2 || argv[2]) // make sure argv[1] exists and make sure there is no more than 2 arguments made
    {
        printf("You dun goof'd\nOnly two arguments required\n");
        return 1; // If so, return error
    }

    int num = atoi(argv[1]);
    int total = 0;
    int a = 0;
    int b = 0;
    for (b = 1; b <= num;)
    {
        if(b % 2 != 0) // If odd..
        {
            total += b; // ..add to total
        }

        b += a;
        a = b;
    }
    printf("%i\n", total);
}