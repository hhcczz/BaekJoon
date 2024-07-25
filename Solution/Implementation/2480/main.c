int main()
{
	int a, b, c;	// 각 눈 변수 3 2 2

	scanf("%d %d %d", &a, &b, &c);	// 각 눈 변수 입력받기
	int Max = a;

	if (a == b && a == c) printf("%d", 10000 + (a * 1000));
	else if (a == b && a != c) printf("%d", 1000 + (a * 100));
	else if (b == c && b != a) printf("%d", 1000 + (b * 100));
	else if (a == c && b != a) printf("%d", 1000 + (c * 100));
	else if (a > b && a > c) printf("%d", a * 100);
	else if (b > a && b > c) printf("%d", b * 100);
	else if (c > b && c > a) printf("%d", c * 100);

	return 0;
}
