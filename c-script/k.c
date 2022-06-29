#include <stdio.h>
#include <string.h>
#include <ctype.h>

void fun(char *s) {
	int k[26] = {0}, n, i, max = 0;
	char ch;
	while (*s) {
		if (isalpha(*s)) {
			ch = tolower(*s);
			n = ch - 'a';
			k[n] += 1;
		}
		s++;
		if (max < k[n])
			max = k[n];
	}
	printf("\nAfter count :\n");
	for (i = 0; i < 26; i++)
		if (k[i] == max)
			printf("\nletter \'%c\': %d times\n", i + 'a', k[i]);
}

main() {
	char s[81];
	printf("\nEnter a string:\n\n");
	fgets(s, 81, stdin);
	fun(s);
	getchar();
}
