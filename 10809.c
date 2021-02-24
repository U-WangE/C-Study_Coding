#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {
	char s[101] = { 0 };
	int arr[26];
	int i;

	scanf("%s", s);

	for (i = 0; i < 26; i++)
		arr[i] = -1;

	for (i = 0; i < strlen(s); i++)
		if (arr[s[i] - 'a'] == -1)
			arr[s[i] - 'a'] = i;

	for (i = 0; i < 26; i++)
		printf("%d ", arr[i]);
}