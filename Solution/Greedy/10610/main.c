int compare(const void* first, const void* second) {	// 오름차순 정리
	if (*(int*)first > *(int*)second)
		return -1;
	else if (*(int*)first < *(int*)second)
		return 1;
	else
		return 0;
}

int main()
{
	int N;
	int Check_N = 10;
	int temp = 0; // 길이
	int temp_Save = 0; // 바꿀 길이
	int result = 0; // 정답
	bool EXIT = false;

	int save_pow = 0;

	int Number[100001] = { 0 };
	int Number_1[100001] = { 0 };

	scanf_s("%d", &N);

	while (EXIT != true)
	{
		if (N / Check_N < 1) EXIT = true;
		Check_N *= 10;
		temp++;
	}
	temp_Save = temp - 1;

	printf("%d\n", temp);
	for (int i = 0; i < temp; i++)
	{
		save_pow = pow(10, temp_Save);
		if (N / pow(10, temp_Save < 0)) Number[i] = N / pow(10, temp_Save);
		else Number[i] = N % save_pow;
		N = N % save_pow;
		temp_Save--;


	}
	qsort(Number, temp, sizeof(int), compare);

	for (int i = 0; i < temp; i++) printf("%d\t", Number[i]);
	putchar('\n');
	temp_Save = temp - 1;
	for (int i = 0; i < temp; i++)
	{
		Number_1[i] = Number[i] * pow(10, temp_Save);
		temp_Save--;
	}
	for (int i = 0; i < temp; i++) result += Number_1[i];
	printf("%d\n",result);

	if (result % 30 == 0) printf("%d\n", result);
	else printf("-1");


	return 0;
}
