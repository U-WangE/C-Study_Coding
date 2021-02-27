#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int n, i, j;
	int * m;
	double * l, *per;;
	int **score;

	scanf("%d", &n);

	m = (int*)malloc(sizeof(int) * n);
	per = (double*)malloc(sizeof(double) * n);
	l = (double*)malloc(sizeof(double) * n);
	score = (int**)malloc(sizeof(int*) * n);

	for (i = 0; i < n; i++) {
		scanf("%d", &m[i]);
		l[i] = 0;
		score[i] = (int*)malloc(sizeof(int) * m[i]);
		for (j = 0; j < m[i]; j++) {
			scanf("%d", &score[i][j]);
			l[i] += score[i][j];
		}
		l[i] /= m[i];
	}

	for (i = 0; i < n; i++) {
		per[i] = 0;
		for (j = 0; j < m[i]; j++) {
			if (l[i] < score[i][j])
				per[i] += 1;
		}
		per[i] = per[i] / m[i] * 100;
		printf("%.3lf%\n", per[i]);
	}
}