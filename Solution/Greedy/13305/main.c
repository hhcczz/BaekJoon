#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	int N;	// 도시의 개수
	unsigned int Road_length[1000000] = {0};	// 도로의 길이
	unsigned int Oil_Price[1000000] = {0};	// 도시마다 기름 가격
	int Save_Road_length = 0;
	int save_i = 0;
	bool save_check = false;


	scanf("%d", &N);	// 도시의 개수 받기

	for (int i = 0; i < N - 1; i++) scanf("%d", &Road_length[i]);	// 도로 개수의 가격 받기
	for (int i = 0; i < N; i++) scanf("%d", &Oil_Price[i]);	// 도시마다 기름 가격 받기

	int Min_Price = 0;	// 최소 기름 가격

	for (int i = 1; i < N; i++)
	{
		if (Oil_Price[i - 1] >= Oil_Price[i])	// 지금 주유소가 다음 주유소보다 가격이 높을때 IF문
		{
			Min_Price += Oil_Price[i - 1] * Road_length[i - 1];
		}

		else if (Oil_Price[i - 1] < Oil_Price[i])	// 다음 주유소가 지금 주유소보다 가격이 높을때 IF문
		{
			Save_Road_length += Road_length[i - 1] + Road_length[i];	// Save_Road_length에 거리를 다 더하기
			if (save_check == false)	// 첫 기름 가격 저장 판별기
			{
				save_i = i - 1;	// Save_i에 그때 주유소 가격을 저장하기
				save_check = true;	// 첫 기름 가격 저장했음
			}
			if(i != N - 1) i++;
		}
		else 
		{
			Min_Price += Oil_Price[save_i] * Save_Road_length;	// 최소 기름 가격에 기름 가격 * Save_Road_length
			save_i = 0;	// Save_i 초기화
			save_check = false;	// 첫 기름 가격 저장 초기화
			Save_Road_length = 0;	// Save_Road_length 초기화
		}
	}
	if (save_check == true)
	{
		Min_Price += Oil_Price[save_i] * Save_Road_length;	// 최소 기름 가격에 기름 가격 * Save_Road_length
	}
		

	printf("%u", Min_Price);
	
	return 0;
}
