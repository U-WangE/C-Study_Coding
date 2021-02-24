#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int n, i, sum = 0;
	char * num;

	scanf("%d", &n);

	num = (char*)malloc(sizeof(char) * n);

	scanf("%s", num);

	for (i = 0; i < n; i++) {
		sum += num[i] - '0';
	}

	printf("%d", sum);
}