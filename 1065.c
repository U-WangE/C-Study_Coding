#pragma warning(disable:4996)
#include<stdio.h>

int arithmetic(int n) {  // 무조건 3자리 숫자
	int a, b, c, i, cnt = 0;
	if (n == 1000)
		n -= 1;
	for (i = 100; i <= n; i++) {
		a = i % 10;
		b = (i % 100) / 10;
		c = (i % 1000) / 100;

		if (a - b == b - c)
			cnt++;
	}
	return cnt;
}

int main() {
	int n;

	scanf("%d", &n);

	if (n < 100)
		printf("%d", n);
	else {
		printf("%d", arithmetic(n) + 99);
	}
}