#include <stdio.h>
#include <string.h>
int main () {
	char s1 [80], s2 [80];
	printf ("Enter the first string\n");
	gets (s1);
	printf ("Enter second string\n");
	gets (s2);
	if (strcmp (s1,s2) <= 0)
		printf ("%s\n%s", s1, s2);
	else
		printf ("%s\n%s", s2, s1);
}
