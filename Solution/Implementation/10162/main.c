int main()
{
	// A = 5분, B = 1분, C = 10초
	int A = 300, B = 60, C = 10;
	int Count_A = 0, Count_B = 0, Count_C = 0;	// A, B, C 카운트
	int T;	//	요리시간 T

	scanf("%d", &T);	// 요리시간 T 스캔

	if (T % C != 0) printf("-1");	// 나눌수없으면 -1 표현
	else
	{
		while (T != 0)	// T가 끝나면 종료되게 While문 설정
		{
			if (T / A >= 1)	// 300부터 나눠가기 시작 최솟값이기 때문
			{
				T -= A;	// 한 번 값 빼주기
				Count_A++;	// 횟수 더하기
			}
			else if (T / B >= 1)	// 60 나누기
			{
				T -= B;	// 한 번 값 빼주기
				Count_B++;	// 횟수 더하기
			}
			else if (T / C >= 1)	// 10 나누기
			{
				T -= C;	// 한 번 값 빼주기
				Count_C++;	// 횟수 더하기
			}
		}

		printf("%d %d %d", Count_A, Count_B, Count_C);	// 정답 출력
	}


	return 0;
}
