#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int t, a, b, i;
	int* arr;

	scanf("%d", &t);
	arr = (int*)malloc(sizeof(int)*t);

	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (i = 0; i < t; i++) {
		printf("%d\n", arr[i]);
	}
}