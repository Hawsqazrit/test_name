#include <stdio.h>
#include <string.h>


main() {
	int a = 0x167;
	printf("%d\n", a/2);
	char str[] = "\00012\\08ad\0bce";
	printf("%d, %d\n", strlen(str), sizeof(str));
}
