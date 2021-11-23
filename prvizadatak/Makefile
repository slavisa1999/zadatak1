exe: main.o all_caps.o no_numbers.o sort_by_abc.o most_common.o no_letters.o palindrom_check.o
	gcc -o exe main.o all_caps.o no_numbers.o sort_by_abc.o most_common.o no_letters.o palindrom_check.o

main.o : main.c functions.h
	gcc -c main.c

all_caps.o : all_caps.c functions.h
	gcc -c all_caps.c

no_numbers.o : no_numbers.c functions.h
	gcc -c no_numbers.c

sort_by_abc.o : sort_by_abc.c functions.h
	gcc -c sort_by_abc.c

most_common.o : most_common.c functions.h
	gcc -c most_common.c

no_letters.o : no_letters.c functions.h
	gcc -c no_letters.c

palindrom_check.o : palindrom_check.c functions.h
	gcc -c palindrom_check.c

clean:
	rm exe *.o
