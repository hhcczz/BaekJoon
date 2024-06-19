int main()
{
	int N = 0;
	int A[100];
	int B[100];
	int Save_B[100] = { 0 };
	int Result = 0;
	int temp = 0;

	scanf("%d", &N);	// N값 받기

	for (int i = 0; i < N; i++) scanf("%d", &A[i]);	// A값 받기
	for (int i = 0; i < N; i++) scanf("%d", &B[i]);	// B값 받기

	for (int i = 0; i < N; i++) Save_B[i] = B[i];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (A[i] < A[j]) continue;
			temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (Save_B[i] > Save_B[j]) continue;
			temp = Save_B[j];
			Save_B[j] = Save_B[i];
			Save_B[i] = temp;
		}
	}
	for (int i = 0; i < N; i++) Result += A[i] * Save_B[i];
	printf("%d", Result);

	return 0;
}
