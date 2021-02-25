#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {
	char s[1000002];
	int i, cnt = 0, t = 0;

	fgets(s, 1000001, stdin);

	for (i = 0; i < strlen(s); i++) {
		if (s[i] == ' ')
			if (s[i + 1] != '\n')
				cnt++;
	}

	if (s[0] != ' ')
		cnt++;
	if (strlen(s) == 1)
		cnt = 0;

	printf("%d", cnt);
}