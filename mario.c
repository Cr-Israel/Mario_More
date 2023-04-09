#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int first_size = 0;

    // do-while loop to prompt for user input and validate input within allowed range
    do
    {
        printf("Height:  ");
        first_size = get_int("");
    }
    while (first_size < 1 || first_size > 8);

    // for loop to print the first pyramid
    for (int i = 0; i < first_size; i++)
    {
        // inner for loop to print the necessary whitespace before printing the "#" blocks of the pyramid
        for (int j = 0; j < first_size - i - 1; j++)
        {
            printf(" ");
        }

        // inner for loop to print the "#" blocks corresponding to each line of the pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // two whitespace characters to separate the pyramids
        printf("  ");

        // inner for loop to print the "#" blocks corresponding to each line of the second pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // newline character to end each row of the pyramids
        printf("\n");
    }

    return 0;
}