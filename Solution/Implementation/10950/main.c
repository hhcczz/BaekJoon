int main()
{
	int T;
	int Sum[100][2];

	scanf("%d", &T);

	for (int i = 0; i < T; i++) scanf("%d %d", &Sum[i][0], &Sum[i][1]);

	for (int i = 0; i < T; i++) printf("%d\n", Sum[i][0] + Sum[i][1]);


	return 0;
}
