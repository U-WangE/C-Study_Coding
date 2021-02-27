#include<stdio.h>

int main() {
	int h, m, t = 0;

	scanf("%d %d", &h, &m);

	t = h * 60 + m - 45;
	if (t < 0)
		t += 24 * 60;
	h = t / 60;
	m = t % 60;
	printf("%d %d", h, m);
}