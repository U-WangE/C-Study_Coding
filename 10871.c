#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int n, x, i;
	int *arr;

	scanf("%d %d", &n, &x);

	arr = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < n; i++)
		if (arr[i] < x)
			printf("%d ", arr[i]);
}