#include <stdio.h>
#include <math.h>

int main(void)
{
    int m, n;
    int ans1 = 0; // 합
    int ans2 = 0; // 최솟값
    char arr[100001] = {0, };//완전제곱수를 받을 배열을 선언
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n; i++)
    {
        int k = sqrt(i);
        if(k - floor(k) == 0) // 정수(완전제곱수)
        {
            ans1 += i; //ans1에 더해주기
            arr[i] = i; //arr[i]에 배열 추가
        }
    }
    ans2 = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(ans2 > arr[i])
        {
            arr[i] = ans2;
        }
    }

    printf("%d %d", ans1, ans2);


    return 0;
}