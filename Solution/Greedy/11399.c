int main()
{
	int N = 0;
	int Pi[1001] = { 0 };
	int Save_Pi;
	int Result = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &Pi[i]);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (Pi[i] <= Pi[j])
			{
				Save_Pi = Pi[j];
				Pi[j] = Pi[i];
				Pi[i] = Save_Pi;
			}
		}
	}

	for (int i = 0; i < N; i++) printf("Pi[%d] = %d, ", i, Pi[i]);
		
	putchar('\n');

	int Time[1001] = { 0 };
	Time[0] = Pi[0];

	for (int i = 1; i < N; i++)
	{
		Time[i] = Time[i - 1] + Pi[i];
	}
	for (int i = 0; i < N; i++)
	{
		Result += Time[i];
	}

	printf("%d", Result);

	return 0;
}
