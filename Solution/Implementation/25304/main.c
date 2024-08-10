int main()
{
	int X, N, a[100], b[100];
	int Sum = 0;

	scanf("%d", &X);
	scanf("%d", &N);

	for (int i = 0; i < N; i++) scanf("%d %d", &a[i], &b[i]);

	for (int i = 0; i < N; i++) Sum += a[i] * b[i];

	if (Sum == X) printf("Yes");
	else printf("No");

	return 0;
}
