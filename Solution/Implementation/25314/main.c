int main()
{
	int N;

	scanf("%d", &N);

	while (N >= 4)
	{
		N -= 4;
		printf("long ");
	}
	printf("int");
	return 0;
}
