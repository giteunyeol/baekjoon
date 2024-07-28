#include <stdio.h>

int main(void)
{
    int n, max; //갯수와 최댓값 할당
    scanf("%d %d", &n, &max); //갯수, 최댓값 입력
    int number[101]; //number 배열 설정
    int sum = 0; // sum 할당
    


    //number들 입력
    for(int i =0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    
    

    //number i , j , k 모든 수 입력
    for(int i =0; i < n; i++)
    {
        for(int j =i+1; j < n; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                int sum1 = number[i] + number[j] + number[k];
                
                if(sum1 <= max && sum1 > sum)
                {
                    sum = sum1;
                    
                }
            }
        }
    }
    printf("%d\n", sum);


    return 0;
}