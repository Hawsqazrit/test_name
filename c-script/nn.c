#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 65535

main() {
	char s[MAX_STRING_LENGTH];
	int i;
	printf("请输入长度小于 %d 的任意字符：", MAX_STRING_LENGTH);
	scanf("%s", s);
	// for (i = 0; i < strlen(s); i++)
	for (i = 0; s[i]; i++)
		printf("%c 的 ASCII 为 %d\n", s[i], s[i]);
}
