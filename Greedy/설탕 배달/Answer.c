int main()
{
	int Sugar_KG;
	int cnt = 0;

	scanf_s("%d", &Sugar_KG);

	while (Sugar_KG != 0 && cnt != -1)
	{
		printf("현재 Sugar_KG = %d, 현재 cnt = %d\n", Sugar_KG, cnt);
		if (Sugar_KG % 5 == 0)
		{
			cnt = Sugar_KG / 5;
			Sugar_KG = 0;
		}
		else if ((Sugar_KG / 5 > 0 && Sugar_KG % 3 != 0) || Sugar_KG - 5 >= 13)
		{
			Sugar_KG -= 5;
			cnt++;
		}
		else if (Sugar_KG % 3 == 0)
		{
			Sugar_KG -= 3;
			cnt++;
		}
	
		else if (Sugar_KG == 1 || Sugar_KG == 2 || Sugar_KG == 4 || Sugar_KG == 7) cnt = -1;
	}
	
	printf("%d", cnt);

	return 0;
}
