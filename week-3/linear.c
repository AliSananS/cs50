#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int numbers[] = {100, 50, 20, 10, 40, 60, 50, 60, 20, 810, 11};

    int input = get_int("What's the number to find? ");

    // find the number using for loop

    for (int i = 0; i <= 10; i++)
    {
        // printf("%i\n",numbers[i]);
        if (numbers[i] == input)
        {
            printf("Found the number %i\n", input);
            return 0;
        }
    }
    printf("The number %i is not found\n", input);
}