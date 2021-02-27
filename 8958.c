#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int n, i, j, cnt;
	char **arr;
	int *score;

	scanf("%d", &n);

	arr = (char**)malloc(sizeof(char*) * n);
	score = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		arr[i] = (char*)malloc(sizeof(char) * 80);
		scanf("%s", arr[i]);
	}

	for (i = 0; i < n; i++) {
		j = 0;
		cnt = 0;
		score[i] = 0;
		while (arr[i][j] != '\0') {
			if (arr[i][j] == 'O') {
				cnt++;
				score[i] += cnt;
			}
			else
				cnt = 0;
			j++;
		}
	}

	for (i = 0; i < n; i++)
		printf("%d\n", score[i]);
}