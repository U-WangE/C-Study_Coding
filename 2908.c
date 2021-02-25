#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	char a[4], b[4], i;
	char answer;

	scanf("%s %s", a, b);

	for (i = 2; i >= 0; i--) {
		if (a[i] > b[i]) {
			answer = 'a';
			break;
		}
		else if (a[i] < b[i]) {
			answer = 'b';
			break;
		}
	}
	if (answer == 'a')
		for (i = 2; i >= 0; i--)
			printf("%c", a[i]);
	else if (answer == 'b')
		for (i = 2; i >= 0; i--)
			printf("%c", b[i]);
}