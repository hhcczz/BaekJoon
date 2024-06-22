int compare(const void* first, const void* second) {
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
	int k;
	int w;
	int temp = 0;

	scanf("%d", &N);

	int* Rope = (int*)malloc(sizeof(int) * N); //동적할당

	for (int i = 0; i < N; i++) scanf("%d", &Rope[i]);
	int Max_Rope = 0;

	qsort(Rope, N, sizeof(int), compare);

	for (int i = 0; i < N; i++) if (Max_Rope < Rope[i] * (i + 1)) Max_Rope = Rope[i] * (i + 1);

	printf("%d", Max_Rope);

	free(Rope);

	return 0;
}
