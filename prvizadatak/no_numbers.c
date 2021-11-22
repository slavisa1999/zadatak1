#include "functions.h"

int no_numbers(char *str_array)
{


    int i=0;
    char *pomocni = str_array;

    printf("\n===============================================================");
    printf("\nOPTION[2] --> remove numbers and special characters from string:");
    printf("\nInput string : %s", str_array);
    printf(" ==> New string: ");
    while(pomocni[i] !='\0')
    {
        if((pomocni[i]>='a' && pomocni[i]<='z') || (pomocni[i]>='A' && pomocni[i]<='Z'))
        {
            printf("%c", pomocni[i]);
            i++;

        }else
        {
            i++;
        }
    }



    printf("\n===============================================================");
    return 0;
}
