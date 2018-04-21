#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Check input\n");
        return 0;
    }
    char* one = argv[1];
    char* two = argv[2];

    // printf("%s %s\n", one, two);

    int count = 0; // count to iterate through letters of 'two'
    int othercount = 0; // count to count how many times string appears

    for (int i = 0; i < strlen(one); i++)
    {
        if (two[count] == one[i])
        {
            if (two[count + 1] == '\0')
            {
                if (othercount > 0)
                {
                    printf("This string exists more than once\n");
                    return 2;
                }

                othercount++;
                printf("This string exists\n");
                return 1;

            }
            else
            {
                count++;
            }
        }
    }

    printf("This string does not exist\n");
    return 0;
}