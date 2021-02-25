#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {
	int t, *r, i, j, k;
	char ** s;

	scanf("%d", &t);

	r = (int*)malloc(sizeof(int) * t);
	s = (char**)malloc(sizeof(int*) * t);

	for (i = 0; i < t; i++) {
		scanf("%d", &r[i]);
		s[i] = (char*)malloc(sizeof(int) * r[i]);
		scanf("%s", s[i]);
	}

	for (i = 0; i < t; i++) {
		for (j = 0; j < strlen(s[i]); j++)
			for (k = 0; k < r[i]; k++)
				printf("%c", s[i][j]);
		printf("\n");
	}
}