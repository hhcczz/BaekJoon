#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int H, M;
	int Sum = 0;

	scanf("%d %d", &H, &M);

	if (H != 0)
	{
		Sum = (H * 60) + M;
		Sum -= 45;
		H = Sum / 60;
		M = Sum - H * 60;
		printf("%d %d", H, M);
		return 0;
	}
	if (M >= 45) printf("0 %d", M - 45);
	else printf("23 %d", 60 - abs(M - 45));

	return 0;
}
