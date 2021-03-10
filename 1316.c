#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {
	// alpha -> 연속으로 나온 후 다른 단어가 나오면 -1로 바꾸어 단어의 연속이 끝났음을 알림
	// 이후 해당 단어가 나오게 되었을 때 배열이 0이 아닌 -1로 되어있으면 1로 바꿈
	char arr[101];
	int alpha[26] = { 0 };
	int n, i, j, cnt = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", arr);
		for (j = 0; j < strlen(arr); j++) {
			if (alpha[arr[j] - 'a'] == -1)
				alpha[arr[j] - 'a'] = 1;
			else if (alpha[arr[j] - 'a'] != 1 && arr[j] != arr[j + 1])
				if (j + 1 != strlen(arr))
					alpha[arr[j] - 'a'] = -1;
				else if (j == strlen(arr) - 1)
					alpha[arr[j] - 'a'] = -1;
		}

		for (j = 0; j < 26; j++) {
			if (alpha[j] == 1) {
				break;
			}
			else if (j == 25)
				cnt++;
		}

		for (j = 0; j < 26; j++) {
			alpha[j] = 0;
		}
	}
	printf("%d", cnt);
}