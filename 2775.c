#include <stdio.h>

//k층 n호

int main(void)
{
    int t;
    scanf("%d", &t);
    //t번 판별

    //함수 밖에서 각 호실에 몇명이 있는지 미리 할당. 
    // k층(0 ~ 14까지 1호의 값을 1로 초기화)

    // human[0 ~ 14][1]들에 1의 값 할당 
    int human[15][15];
    for(int i = 0; i < 15; i++)
    {
        human[i][1] = 1;
    }
    // human[0][1~14]들의 값에 i의 값 할당(0층)
    for(int i = 1; i < 15; i++)
    {
        human[0][i] = i;
    }
  
    //모든 배열에 사람의 수를 할당
    for(int k = 1; k < 15; k++)
    {
        for(int j  = 2; j < 15; j++)
        {
            //i : k층, j : n호
            human[k][j] = human[k-1][j] + human[k][j-1];
        }

    }

    for(int i = 0; i < t; i++)
    {
        int k , n;
        scanf("%d %d", &k, &n);
        printf("%d\n", human[k][n]);   

    }
    
    
    return 0;
}