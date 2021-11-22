#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(int argc, char *argv[])
{

    int counter;
    int option = atoi(argv[argc-1]);
    printf("COUNT = %d\n", argc);

    printf("Program name:%s", argv[0]);

    if(argc < 3 ){

        printf("\n*************************");
        printf("\n*****Incorrect input*****");
        printf("\n*************************");
        printf("\nPlease try again. *Example* -> ./main examplestring teststring 2 <- *Example*");

    }else if(option > 7 || option < 0){

            printf("\n************************");
            printf("\n**Invalid input option**");
            printf("\n************************");
            printf("\nAvailable options");
            printf("\n=================");
            printf("\n1. Turn all letters from string to CAPITAL letters.");
            printf("\n2. Remove all numbers from the string." );
            printf("\n3. Sort string by alphabetical order.");
            printf("\n4. Most common character in the string.");
            printf("\n5. Remove all letters from the string");
            printf("\n6. Palindrom check.");
            printf("\nPlease try again. *Example* -> ./main examplestring teststring 2 <- **OPTION must be at the end**");

    } else {
            printf("\nOption : %d .", option);
            printf("\nNumber of strings passed: %d.", argc-2);

            for (counter = 1; counter<argc-1; counter++){
                switch(option){

                    case 1:
                        all_caps(argv[counter]);
                        break;
                    case 2:
                        no_numbers(argv[counter]);
                        break;
                    case 3:
                        sort_by_abc(argv[counter]);
                        break;
                    case 4:
                        most_common_letter(argv[counter]);
                        break;
                    case 5:
                        no_letters(argv[counter]);
                        break;
                    case 6:
                        palindrom_check(argv[counter]);
                        break;
                }
            }
        }
    return 0;
}
