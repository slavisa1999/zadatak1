#include "functions.h"
#define MAX_SIZE 100


int no_letters(char *str_array)
{


    int i=0;

    char *pomocni = str_array;

    printf("\n===================================================");
    printf("\nOPTION[5] --> remove letters from string:");
    printf("\nInput string : %s", str_array);
    printf(" ==> New string: ");
    while(pomocni[i] !='\0')
    {
        if((pomocni[i]>='a' && pomocni[i]<='z') || (pomocni[i]>='A' && pomocni[i]<='Z'))
        {

            i++;

        }else
        {
            printf("%c", pomocni[i]);
            i++;


        }
    }

    printf("\n===================================================");
    return 0;
}
