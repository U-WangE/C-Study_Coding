#pragma warning(disable:4996)
#include<stdio.h>
// ������� A, ������� B, ���� C
int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (b >= c)
		printf("-1");
	else {
		printf("%d", a / (c - b) + 1);

	}
}