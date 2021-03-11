#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int t, h, w, n;
	int i;
	int *a, *b;

	scanf("%d", &t);

	a = (int*)malloc(sizeof(int)*t);
	b = (int*)malloc(sizeof(int)*t);

	for (i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);

		if (n <= h) {
			a[i] = n;
			b[i] = 1;
		}
		else {
			if (n%h == 0) {
				a[i] = h;
				b[i] = (n / h);
			}
			else {
				a[i] = (n % h);
				b[i] = (n / h) + 1;
			}
		}
	}

	for (i = 0; i < t; i++)
		printf("%d%02d\n", a[i], b[i]);
}