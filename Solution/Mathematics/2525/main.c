#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int H, M;
	int Cooking_Time;
	int Sum;

	scanf("%d %d", &H, &M);
	scanf("%d", &Cooking_Time);

	if (H * 60 + Cooking_Time + M < 1440)
	{
		Sum = (H * 60) + Cooking_Time + M;
		H = Sum / 60;
		M = Sum - H * 60;
		printf("%d %d", H, M);
		return 0;
	}
	else
	{
		Sum = (H * 60) + Cooking_Time + M;
		H = abs(24 - Sum / 60);
		M = (Sum - 1440) - (H * 60);
		if (M == 60)	H += 1, M = 0;
		printf("%d %d", H, M);
		return 0;
	}

	return 0;
}
