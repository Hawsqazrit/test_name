#include <stdio.h>
#include <string.h>
#define N 5
#define M 10

// `char (*ss)[M]`定义的这个`ss`指针是一个指向一维字符数组的指针
// `*ss`或`ss[0]`取的第`0`个字符数组
void fun(char (*ss)[M], int k) {
	int i = 0;
	while (i < N) {
		// `ss[i]`因为是个字符数组，那`ss[i][k]`就是这个数组中的元素，即字符了
		// 字符串以'\0'为结束标志
		ss[i][k] = '\0';
		// *ss[i] = '~';
		i++;
	}
}


main() {
	char x[N][M] = {"Create", "Modify", "Sort", "Skip", "Delete"};
	int i;
	printf("\nThe original string\n\n");
	for (i = 0; i < N; i++)
		puts(x[i]);
	printf("\n");
	fun(x, 4);
	printf("\nThe string after deleted:\n\n");
	for (i = 0; i < N; i++)
		puts(x[i]);
	printf("\n");
	getchar();
}
