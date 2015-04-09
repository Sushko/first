#include <stdio.h>

/*
Given the partially written program below, fix the indicated bug, and
add code to count the number of negative, zero and positive numbers
in the data read in. You should use switch, if and at least one loop
construct
*/

/* bug: should check if s is zero */

int sign (int s)

{ 
	if (0 == s) return 0;
	else        return abs(s)/s;
}

main ()
{
  int data [10],
      i, n, 
      negatives, zeros, positives;

	n = sizeof data / sizeof (int);
	negatives = zeros = positives  = 0;
	printf("Enter %d numbers : ", n);

	/* need loop on i from 0 to n-1 around this */
        for (i=0; i<n; i++)
	{
		/* read in the data */
		scanf("%d", &data[i]);
		switch (sign(data[i]))
		{
		case -1:
		  negatives++;
		  break;
		case 1:
                  positives++;
		  break;
		case 0:
		default:
		  zeros++;
		  break;
		}
	}
	/* now count negatives , zeros, positives */
	printf("negatives=%d,zeros=%d,positives=%d\n", negatives, zeros, positives);

}
