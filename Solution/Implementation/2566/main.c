int main()
{

    int Arr[101][101];
    int MAX = 0, MAX_i = 0, MAX_j = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (MAX < Arr[i][j])
            {
                MAX = Arr[i][j];
                MAX_i = i + 1;
                MAX_j = j + 1;
            }
        }
    }
    if (MAX_i != 0 && MAX_j != 0) printf("%d\n%d %d", MAX, MAX_i, MAX_j);
    else printf("0\n1 1");
    return 0;
}
