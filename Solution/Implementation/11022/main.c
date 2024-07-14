int main()
{
	int T, A[1000], B[1000];

	scanf("%d", &T);

	for (int i = 1; i <= T; i++) scanf("%d %d", &A[i], &B[i]);

	for (int i = 1; i <= T; i++) printf("Case #%d: %d + %d = %d\n", i, A[i], B[i], A[i] + B[i]);
	
	return 0;
}
