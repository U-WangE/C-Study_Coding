#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	char str[1000001] = { 0 };
	int alp[27] = { 0 };
	int i = 0, max = 0, index = 0, multimax = 0;

	scanf("%s", str);

	while (str[i] != '\0') {
		if (str[i] <= 'z' && str[i] >= 'a')
			alp[str[i] - 'a']++;
		else
			alp[str[i] - 'A']++;
		i++;
	}

	for (i = 0; i < 26; i++) {
		if (alp[i] > max) {
			index = i;
			max = alp[i];
			multimax = 0;
		}
		else if (alp[i] == max)
			multimax = 1;
	}

	if (multimax == 0)
		printf("%c\n", index + 'A');
	else
		printf("?\n");
}