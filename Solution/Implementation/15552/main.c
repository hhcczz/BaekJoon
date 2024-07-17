int main()
{
    long long T, A[1000010], B[1000010];

	scanf("%lld", &T);

	for (int i = 0; i < T; i++) scanf("%lld %lld", &A[i], &B[i]);

	for (int i = 0; i < T; i++) printf("%lld\n", A[i] + B[i]);
	
	return 0;
}
