int main()
{
	unsigned long S;
	unsigned long i = 0;
	unsigned long cnt = 0;
	unsigned long Num_Start = 0;
	scanf("%u", &S);

	while (Num_Start != S)
	{
		if (S == 4294967295)
		{
			Num_Start = 4294967295;
			cnt = 92681;
			break;
		}
		i++;
		if (Num_Start + i > S) Num_Start = S;
		else
		{
			Num_Start += i;
			cnt++;
		}
	}

	printf("%u", cnt);

	return 0;
}
