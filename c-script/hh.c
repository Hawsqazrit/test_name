#include <stdio.h>

void fun(int m, int k) {
	int aa[20], i;
	// for(i = 0; m; i++) {
	for (i = 0; m != 0; i++) {
		aa[i] = m % k;
		m /= k;
	}
	// i = sizeof(aa) / sizeof(aa[0]) - 1; 
	// for (; i; i--)
	// 	printf("%d", aa[i - 1]);
	for (i -= 1; i >= 0; i--)
		printf("%d", aa[i]);
}

main() {
	int b, n;
	printf("\nPlease enter a number and a base:\n");
	scanf("%d %d", &n, &b);
	fun(n, b);
	printf("\n");
	getchar();
}
