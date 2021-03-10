#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {
	char arr[101];
	int i, cnt = 0;

	scanf("%s", arr);

	for (i = 0; i < strlen(arr); i++) {
		if (arr[i] == '=') {
			if (arr[i - 1] == 'c' || arr[i - 1] == 's') {
				cnt--;
			}
			else if (arr[i - 1] == 'z') {
				if (i != 1 && arr[i - 2] == 'd') {
					cnt -= 2;
				}
				else {
					cnt--;
				}
			}
		}
		else if (arr[i] == '-') {
			if (arr[i - 1] == 'c' || arr[i - 1] == 'd') {
				cnt--;
			}
		}
		else if (i != 0 && arr[i] == 'j') {
			if (arr[i - 1] == 'l' || arr[i - 1] == 'n') {
				cnt--;
			}
		}
		cnt++;
	}

	printf("%d", cnt);
}