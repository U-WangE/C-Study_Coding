#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int arr[10];
	int dif[42] = { 0 };
	int i, cnt = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (dif[arr[i] % 42] == 0) {
			dif[arr[i] % 42]++;
			cnt++;
		}
	}
	printf("%d", cnt);
}