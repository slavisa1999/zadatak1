#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100


int all_caps(char *str_array); //sva slova pretvoriti u  slova
int most_common_letter(char *str_array); //pronaci slovo koje se najvise puta ponavlja
int no_letters(char *str_array); // iz stringa izbaciti sva slova
int no_numbers(char *str_array);//izbaciti iz stringa sve brojeve
int sort_by_abc(char *str_array);//sortirati slova iz stringa po abecednom redu
int palindrom_check (char *str_array); //proveriti da li je uneti string palindrom




#endif
