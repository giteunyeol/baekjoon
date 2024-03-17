#include <stdio.h>

// n combination k : n ! / (n - k)! * k!;
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ans = 1;
    // ans에 i ~ n까지 곱셈, 분모
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    // (n - k)!
    for(int i = 1; i <= n - k; i++)
    {
        ans /= i;
    }
    for(int i = 1; i <= k; i++)
    {
        ans /= i;
    }

    printf("%d", ans);


    return 0;
}
