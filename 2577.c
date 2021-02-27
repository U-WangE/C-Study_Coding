#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int a, b, c, avg, i;
	int arr[10] = { 0 };

	scanf("%d\n%d\n%d", &a, &b, &c);

	avg = a * b * c;

	if (avg == 0)
		arr[0] = 1;
	else {
		while (avg != 0) {
			if (avg != 0)
				arr[avg % 10]++;
			avg /= 10;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}