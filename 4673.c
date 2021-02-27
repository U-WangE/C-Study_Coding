#pragma warning(disable:4996)
#include<stdio.h>
int arr[10001] = { 0 };

int d(int n) {
	int i, sum = n;

	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	arr[sum]++;
	if (sum <= 10000)
		d(sum);
	else
		return;
}

int main() {
	int i;

	for (i = 1; i <= 10000; i++)
		d(i);

	for (i = 1; i <= 10000; i++)
		if (arr[i] == 0)
			printf("%d\n", i);
}