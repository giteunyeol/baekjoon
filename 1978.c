#include <stdio.h>

int main(void)
{
    int n; // 몇개를 인식할 것인지
    scanf("%d", &n);
    int primecount = 0;

    for(int i = 0 ; i < n; i++)
    {
        int primeox;
        scanf("%d", &primeox);
        int a = 0; // primeox를 판별할 임시 수
        if(primeox == 2)
        {
            primecount++;
            continue;
        }

        for(int j = 2; j < primeox; j++)
        {
            if(primeox % j == 0 && primeox != 2 )
            {
                a++;
            }
            else if (j == primeox - 1 && a == 0 && primeox != 2)
            {
                primecount++;
            }
        }

    }
    printf("%d", primecount);

    return 0;
}