
1
int main()
2
{
3
    int N;
4
    int SUM = 0;
5
    char Arr[101];
6
​
7
    scanf("%d", &N);
8
​
9
    for (int i = 0; i < N; i++) scanf(" %c", &Arr[i]);
10
​
11
​
12
    for (int i = 0; i < N; i++) SUM += (char)Arr[i] - 48;
13
​
14
    printf("%d", SUM);
15
​
16
    return 0;
17
}
