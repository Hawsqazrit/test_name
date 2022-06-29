#include <stdio.h>

int fun(double x[], int n) {
	int j, c = 0;
	double xa = 0.0;
	for (j = 0; j < n; j++) 
		xa += x[j] / n;
	printf("ave = %f\n", xa);
	for (j = 0; j < n; j++)
		if (x[j] >= xa)
			c++;
	return c;
}

main() {
	double x[100] = {193.199, 195.673, 195.757, 196.051, 196.092, 196.596, 196.579, 196.763};
	printf("%d\n", fun(x, 8));
	getchar();
}
