#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	double avg = 0;
	int n, max = 0, i;
	int * arr;

	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}

	for (i = 0; i < n; i++) {
		avg += (double)arr[i] / max * 100;
	}
	printf("%.2lf", avg / n);
}