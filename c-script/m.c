#include <stdio.h>
#include <string.h>

void fun (char t[]) {
	char c;
	int i, j;
	for (i = strlen(t) - 1; i; i--)
		for (j = 0; j < i; j++)
			if (t[j] > t[j + 1]) {
				c = t[j];
				t[j] = t[j + 1];
				t[j + 1] = c;
			}
}

main() {
	char s[81];
	printf("\nPlease enter a character string: ");
	gets(s);
	// fgets(s, 81, stdin);
	printf("\n\nBefore sorting:\n \"%s\"", s);
	fun(s);
	printf("\nAfter sorting decendingly:\n \"%s\"\n", s);
	getchar();
}
