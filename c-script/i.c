#include <stdio.h>

double fun(int n) {
	int i;
	double s, t;
	s = 0.0;
	for (i = 1; i <= n; i++) {
		t = 2.0 * i;
		s = s + (2.0 * i - 1) * (2.0 * i + 1) / (t * t);
	}
	return s;
}

main() {
	int n = -1;
	while (n < 0) {
		printf("Please input(n>0): ");
		scanf("%d", &n);
	}
	printf("\nThe result is: %f\n", fun(n));
	getchar();
}
