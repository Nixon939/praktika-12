#include <stdio.h>
#include <string.h>
int main () {
	char s1 [] = "Vasuliy",
		 s2 [] = "Petr";
	if (0 == strcmp (s1,s2))
		printf ("String %s and %s the same", s1, s2);
	else
		printf ("String %s and %s Different", s1, s2);
	return 0;
}
