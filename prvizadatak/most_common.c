#include "functions.h"

int most_common_letter(char *str_array)
{
    int ASCIarray[255] = {0};

    int i,j, max,max2, index;

    for(i = 0; str_array[i] != 0; i++)
    {
       ++ASCIarray[toupper(str_array[i])];
    }

    max = ASCIarray[0];
    index = 0;
    for(i = 0; str_array[i] != 0; i++){
         if( ASCIarray[toupper(str_array[i])] > max)
         {
             max = ASCIarray[str_array[i]];
             index = i;
         }
    }



    int count = ASCIarray[str_array[index]];



    if (count != 1)
    {
        printf("\n==========================================================================");
        printf("\nOPTION[4] --> Input string : %s", str_array);
        printf("\nOPTION[4] --> Most common character :");

        printf("\n%c --> appears %d times.", str_array[index],max);
        for(i = 0; str_array[i] != 0; i++){
            if( ASCIarray[str_array[i]] == max && str_array[i] != str_array[index])
            {
                max = ASCIarray[str_array[i]];
                char prethodni = str_array[i];

                index = i;
                printf("\n%c --> appears %d times.", str_array[index],ASCIarray[str_array[index]] );
            }
        }

        printf("\n==========================================================================");

    }
    else
    {
        printf("\n==========================================================================");
        printf("\nOPTION[4] --> Input string : %s", str_array);
        printf("\nOPTION[4] --> all letters appear only once.");
        printf("\n==========================================================================");
    }

    return 0;

}


