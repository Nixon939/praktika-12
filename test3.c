#include <stdio.h>
int main () {
	char s[80];
	int i;
	printf ("\n Enter the string \n");
	gets (s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a')
			s[i] = 'b';
		i ++;
	}
	puts ("Result: \n");
	puts (s);
	return 0;
}
