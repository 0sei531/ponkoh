#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char line [80];
	FILE *in = fopen ("spooky.csv", "r");
	FILE *file1 = fopen ("ufos.csv", "w");
	FILE *file2 = fopen ("disappearnaces.csv", "w");
	FILE *file3 = fopen ("others.csv", "w");
	while (fscanf (in, "%79[^\n]\n", line) ==)
	{
		if (strstr(line, "UFO"))
			fprintf (file1, "%\n" , line);
		else if (strstr(line, "disappearances")
			fprintf (file2, "%\n" , line);
		else 
			 fprintf (file3, "%\n" , line);

	}
	fclose (file1);
	 fclose (file2);
	  fclose (file3);
	return 0:
}
