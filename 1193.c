/*(0,0) (1,0) (0,1) (0,2) (1,1) (2,0) (3,0) (2,1) (1,2) (0,3) (0,4)
만약 한쪽이 여이 되면 x+1
*/

#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int x, n = 1, cnt;

	scanf("%d", &x);
	while (n*(n + 1) / 2 < x) {
		n++;
	}

	cnt = x - (n - 1) * n / 2;

	if (n % 2 == 0) {
		printf("%d/%d", cnt, n - cnt + 1);
	}
	else {
		printf("%d/%d", n - cnt + 1, cnt);
	}
}