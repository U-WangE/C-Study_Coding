// 한 칸당 1초
// 숫자 1까지 2초
// 1:2  2:3  3:4  4:5 ... 0:11
// abc:3, def:4 ..... tuv:10, wxyz:11
// 단어 길이 2~15

#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {
	char arr[16] = { 0 };
	int alpha[8] = { 2, 5, 8, 11, 14, 18, 21, 25 };
	int i, j, cnt, time = 0;

	scanf("%s", arr);

	for (i = 0; i < strlen(arr); i++) {
		cnt = 2;
		for (j = 0; j < 8; j++) {
			if (arr[i] == '0') {
				time += 11;
				break;
			}
			else if (arr[i] == '1') {
				time += 2;
				break;
			}
			else if (arr[i] - 'A' <= alpha[j]) {
				time += cnt + 1;
				break;
			}
			cnt++;
		}
	}

	printf("%d", time);
}