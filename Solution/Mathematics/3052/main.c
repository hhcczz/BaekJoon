int main()
{
    int A, B;

    B = 42;
    int Result[43];
    for (int i = 0; i < 42; i++) Result[i] = -1;
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &A);
        Result[A % 42] = A % 42;
    }
    for (int i = 0; i < 42; i++) if (Result[i] == -1) B -= 1;
    
    printf("%d", B);
    
    return 0;
}
