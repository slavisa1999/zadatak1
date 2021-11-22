#include "functions.h"

int sort_by_abc(char *str_array)
{
    char *pomocni_abc = str_array;
    char *temp;
    int i,j=0;
    int end_of_string = strlen(str_array);

    printf("\n==================================================");
    printf("\nOPTION[3] --> Sort string by alphabetical order:");
    printf("\nInput string : %s", str_array);

    for(i=0; i<end_of_string-1; i++){
        for(j= i+1; j<end_of_string; j++){
            if(toupper(pomocni_abc[i]) > toupper(pomocni_abc[j])){
                temp = pomocni_abc[i];
                pomocni_abc[i] = pomocni_abc[j];
                pomocni_abc[j] = temp;
            }

        }

    }

    printf(" ==> New string: ");
    printf("%s", pomocni_abc);
    printf("\n==================================================");

    return 0;
}
