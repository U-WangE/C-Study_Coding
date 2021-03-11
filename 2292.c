/*
1 7 19 37 61
1 + 6 + 12 + 18 +
2    3    4
*/


#pragma warning(disable:4996)
#include<stdio.h>
//x = 1
int bee(int n, int x, int cnt) {
	if (n > x) {
		x = x + 6 * cnt;
		bee(n, x, ++cnt);
	} else
		return cnt;
}

int main() {
	int n;

	scanf("%d", &n);

	printf("%d", bee(n, 1, 1));
}