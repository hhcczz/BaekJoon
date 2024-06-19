int main()
{
	int N = 0;
	int temp_1 = 0, temp_2 = 0;
	int cnt = 1;
	int Middle_Num = 100;

	scanf_s("%d", &N);

	int** MeetingArr = (int**)malloc(sizeof(int*) * N);

	// N만큼 배열의 가로 동적할당 
	for (int i = 0; i < N; i++) {
		MeetingArr[i] = (int*)malloc(sizeof(int) * N);
	}

	for (int i = 0; i < N; i++)		// 회의 시간 스캔 받기
	{
		scanf_s("%d %d", &MeetingArr[i][0], &MeetingArr[i][1]);
	}
	


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (MeetingArr[i][1] < MeetingArr[j][1])
			{
				temp_1 = MeetingArr[j][0];
				temp_2 = MeetingArr[j][1];

				MeetingArr[j][0] = MeetingArr[i][0];
				MeetingArr[j][1] = MeetingArr[i][1];

				MeetingArr[i][0] = temp_1;
				MeetingArr[i][1] = temp_2;
			}
		}

	}

	int Back_Num = MeetingArr[0][1];

	for (int i = 1; i < N; i++)
	{
		if (MeetingArr[i][0] >= Back_Num)
		{
			Back_Num = MeetingArr[i][1];
			cnt++;

		}
	}

	
	printf("%d", cnt);

	for (int i = 0; i < N; i++) {
		free(MeetingArr[i]);
	}
	free(MeetingArr);

	return 0;
}
