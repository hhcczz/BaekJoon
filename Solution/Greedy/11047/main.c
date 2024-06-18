int main()
{
	int N = 0;
	int K = 0;
	int Ai[500] = { 0 };
	int cnt = 0;

	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &Ai[i]);
	}

	for (int i = N - 1; i >= 0; i--)
	{
		while (K - Ai[i] >= 0)
		{
			K -= Ai[i];
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}
