#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap (char **data, int i, int j)
{ 
    char temp[255];
      strcpy(temp,    data[i]);
      strcpy(data[i], data[j]);
      strcpy(data[j], temp);
}

void sort (char **data, int n)
{ int i,j,k;
	for (i = 0; i < n-1; i++)
		for (j = i + 1; j > 0; j--)
			    if (strcmp(data[j-1], data[j]) > 0)
			   	swap (data, j-1, j);
}

void main()
{ 
    char *strings [10];
    int i, j, n = 10, str_size = 255; /* in practice read n from file */
        for (i = 0; i < n; i++)
            strings[i] = (char*)malloc(255);

        printf("Enter 10 strings, max 255 chars each:\n");
        for (i=0; i < 10; i++)
	    scanf("%s", strings[i]);

         sort (strings, 10);
         printf ("Sorted data:\n\n");
         for (i=0; i<10; i++)
                 printf("%s\n ", strings[i]);

}
