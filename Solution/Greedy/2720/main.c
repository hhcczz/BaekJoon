int main()
{
	int T; // 테스트 케이스의 개수
	int C[1000] = { 0 };	// 거스름돈 마다 저장하는 배열
	int cnt_QT = 0 , cnt_DI = 0, cnt_NK = 0, cnt_PN = 0; // 쿼터, 다임, 니켈, 페니의 개수

	scanf("%d", &T);

	for (int i = 0; i < T; i++) scanf("%d", &C[i]);

	for (int i = 0; i < T; i++)
	{
		while (C[i] != 0)
		{
			if (C[i] >= 25)
			{
				C[i] -= 25;
				cnt_QT++;
			}
			else if (C[i] >= 10)
			{
				C[i] -= 10;
				cnt_DI++;
			}
			else if (C[i] >= 5)
			{
				C[i] -= 5;
				cnt_NK++;
			}
			else if (C[i] >= 1)
			{
				C[i] -= 1;
				cnt_PN++;
			}
		}
		printf("%d %d %d %d\n", cnt_QT, cnt_DI, cnt_NK, cnt_PN);
		cnt_QT = 0;
		cnt_DI = 0;
		cnt_NK = 0;
		cnt_PN = 0;
	}

	return 0;
}
