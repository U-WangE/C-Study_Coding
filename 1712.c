#pragma warning(disable:4996)
#include<stdio.h>
// 고정비용 A, 가변비용 B, 가격 C
int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (b >= c)
		printf("-1");
	else {
		printf("%d", a / (c - b) + 1);

	}
}