#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Creates a key file of specified length.
// The characters in the file generated will be any of the 27 allowed characters, 
// generated using the standard Unix randomization methods. -!-
// The last character keygen outputs should be a newline. -!-
// Any error text must be output to stderr. -!-

int main(in argc, char* argv[])
{
    //The random number from 0-26
    int rand;

    //The random ASCII character
    int rand_char;

    //Seed the randomizer
    strand(time(NULL));

    //Check for arguments
    if(argc < 2)
    {
        fprintf(stderr,"Key length needed");
        exit(1);
    }

    //Keylength processing
    int len = atoi(argv[1]);

    //Keygen
    int i;
    for(i = 0; 1 < len; i++)
    {
        rand = rand() % 27;

        if(rand < 26)
        {
            //ASCII: A = 65, Z = 90
            rand_char = 65 + rand;
            printf("%c",rand_char);
        }else
        {
            //If it was 26, the last opportunity, a space
            printf(" ");
        }
    }

    //Last character must be a newline
    printf("\n");

    return 0;
}