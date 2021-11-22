#include "functions.h"


int palindrom_check (char *str_array)
{
    char *pomocni = str_array;
    int l = 0;
    int h = strlen(pomocni);

    h = h -1 ;
    while (h > l)
    {
        if (toupper(pomocni[l++]) != toupper(pomocni[h--]))
        {
            printf("\n==========================================================================");
            printf("\nOPTION[6] --> Palindrom check: %s is not a palindrome", pomocni);
            printf("\nINFO[6]   --> Length of string is %d characters.", h);
            printf("\n==========================================================================");
            return 1;
        }

    }
    printf("\n==========================================================================");
    printf("\nOPTION[6] --> Palindrom check: " );
    printf("\nConfirmed %s is a palindrome", pomocni);
    printf("\nINFO[6]   --> Length of string is %d characters.", h);
    printf("\n==========================================================================");
    return 0;
}
