#include "functions.h"

int all_caps(char *str_array)
{
    int j = 0;
    char ch;
    printf("\n==================================================");
    printf("\nOPTION[1] --> Turn all letters to capital letters :");
    printf("\nInput string : %s", str_array);
    printf(" ==> New string: ");
    while (str_array[j]) {
        ch = str_array[j];
        printf("%c", toupper(ch));
        j++;
    }
    printf("\n==================================================");
    return 0;

}
