#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    bool CLEAR = false;
    int K, Q, R, V, KN, P;
    int cnt_K = 0, cnt_Q = 0, cnt_R = 0, cnt_V = 0, cnt_KN = 0, cnt_P = 0;

    scanf("%d %d %d %d %d %d", &K, &Q, &R, &V, &KN, &P);

    while (CLEAR != true)
    {
        if (K == 1 && Q == 1 && R == 2 && V == 2 && KN == 2 && P == 8) CLEAR = true;
        if (K < 1 && K != 1)
        {
            K += 1;
            cnt_K++;
        }
        else if (K > 1 && K != 1)
        {
            K -= 1;
            cnt_K--;
        }
        if (Q < 1 && Q != 1)
        {
            Q += 1;
            cnt_Q++;
        }
        else if (Q > 1 && Q != 1)
        {
            Q -= 1;
            cnt_Q--;
        }
        if (R < 2 && R != 2)
        {
            R += 1;
            cnt_R++;
        }
        else if (R > 2 && R != 2)
        {
            R -= 1;
            cnt_R--;
        }
        if (V < 2 && V != 2)
        {
            V += 1;
            cnt_V++;
        }
        else if (V > 2 && V != 2)
        {
            V -= 1;
            cnt_V--;
        }
        if (KN < 2 && KN != 2)
        {
            KN += 1;
            cnt_KN++;
        }
        else if (KN > 2 && KN != 2)
        {
            KN -= 1;
            cnt_KN--;
        }
        if (P < 8 && P != 8)
        {
            P += 1;
            cnt_P++;
        }
        else if (P > 8 && P != 8)
        {
            P -= 1;
            cnt_P--;
        }
    }

    printf("%d %d %d %d %d %d", cnt_K, cnt_Q, cnt_R, cnt_V, cnt_KN, cnt_P);

    return 0;
}
