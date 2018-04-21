#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>


bool isPrime(int num)
{
    for (int i = 2, max = num / 2; i <= max; i++)
    {
        if (!(num % i))
        {
            return false; // number is not prime
        }
    }
    return true;
}


int main(int argc, char* argv[])
{
    argc = 2; // Specify the number of arguments that will be executed in the command line (1 for file name, 1 for number argument)
    if (!argv[1] || argc > 2 || argv[2]) // make sure argv[1] exists and make sure there is no more than 2 arguments made
    {
        printf("You dun goof'd\nTwo arguments required\n");
        return 1; // If so, return error
    }

    int input = atoi(argv[1]);
    int total = 0;

    for (int i = 2; i <= input; i++)
    {
        if (isPrime(i))
        {
            total += i;
        }
    }
    printf("%i\n", total);
}