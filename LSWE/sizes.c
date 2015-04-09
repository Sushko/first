#include <stdio.h>


void main(int argc, char *argv[])

{ int i;

	for (i=0; i < argc; i++)

		printf("command line argument [%d] = %s\n", i, argv[i]);

		printf("int = %lu\n", sizeof(int));
		printf("signed int = %lu\n", sizeof(signed int));
		printf("unsigned int = %lu\n", sizeof(unsigned int));

		printf("short int = %lu\n", sizeof(short int));
		printf("signed short int = %lu\n", sizeof(signed short int));
		printf("unsigned short int = %lu\n", sizeof(unsigned short int));

		printf("long int = %lu\n", sizeof(long int));
		printf("signed long int = %lu\n", sizeof(signed long int));
		printf("unsigned long int = %lu\n", sizeof(unsigned long int));

		printf("int = %lu\n", sizeof(sizeof(int)));
		printf("signed int = %lu\n", sizeof(sizeof(signed int)));
		printf("unsigned int = %lu\n", sizeof(sizeof(unsigned int)));

		printf("short int = %lu\n", sizeof(sizeof(short int)));
		printf("signed short int = %lu\n", sizeof(sizeof(signed short int)));
		printf("unsigned short int = %lu\n", sizeof(sizeof(unsigned short int)));

		printf("long int = %lu\n", sizeof(sizeof(long int)));
		printf("signed long int = %lu\n", sizeof(sizeof(signed long int)));
		printf("unsigned long int = %lu\n", sizeof(sizeof(unsigned long int)));


}


