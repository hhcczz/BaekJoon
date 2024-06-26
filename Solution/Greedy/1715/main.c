int compare(const void* first, const void* second) {	// 오름차순 정리
	if (*(int*)first < *(int*)second)
		return -1;
	else if (*(int*)first > *(int*)second)
		return 1;
	else
		return 0;
}

int main()
{
	int N;	// 카드 묶음 수
	long long Min_Result = 0;	// 최소 카드 묶음
	int check = 0; // 0이면 일반적인거 1이면 합이 마지막보다 큰거

	scanf("%d", &N);	// 카드 묶음 수 받기

	int Card[100001] = { 0 }; // 카드 뭉치 개수 선언
	int Card_2[50000] = { 0 };	// 두 번째 카드 뭉치 선언

	for (int i = 0; i < N; i++) scanf("%d", &Card[i]);	// 카드 뭉치 개수 받기

	qsort(Card, N, sizeof(int), compare);	// 오름차순

	if (Card[0] + Card[1] > Card[N - 1]) check = 1;	// 일반적이지 않으면 1
	else check = 0;	// 일반적이면 0

	

	if (check == 1)
	{
		for (int i = 0; i < N / 2; i++)
		{
			if (check == 1)
			{
				if (i != 0) Card_2[i] += Card[i * 2] + Card[(i * 2) + 1];
				else Card_2[i] += Card[i] + Card[i + 1];
			}
		}
		for (int i = 0; i < N / 2; i++)
		{
			Min_Result += Card_2[i];
		}
		Min_Result *= 2;
	}
	else 
	{
		for (int i = 0; i < N; i++)	// Main Code
		{
			Min_Result += Card[i + 1];
			for (int j = 0; j < i; j++) Min_Result += Card[j];

		}
	}

	printf("%lld\n", Min_Result);

	return 0;
}
