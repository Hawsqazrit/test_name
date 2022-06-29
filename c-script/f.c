#include <stdio.h>

unsigned long fun(unsigned long n) {
	unsigned long x = 0;
	int t;
	while (n) {
		t = n % 10;
		if (t % 2 == 0)
			x = x * 10 + t;
		n = n / 10;
	}
	return x;
}

main() {
	unsigned long n = -1;
	while (n > 99999999 || n < 0) {
		printf("Please input(0 < n < 100000000: ");
		scanf("%ld", &n);
	}
	printf("\nThe result is: %ld\n", fun(n));
	getchar();
}
