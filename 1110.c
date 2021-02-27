#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int n, i, max = -1000001, min = 1000001;
	int *arr;

	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d ", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	printf("%d %d", min, max);
}