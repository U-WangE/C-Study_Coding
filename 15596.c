long long sum(int *a, int n) { // 배열 a의 길이 n
	long long ans = 0;

	int i;

	for (i = 0; i < n; i++)
		ans += a[i];

	return ans;
}
